import java.util.Scanner;
class Switch
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter 2 values");
float a=sc.nextFloat();
float b=sc.nextFloat();
System.out.println("1.addition");
System.out.println("2.sub");
System.out.println("Enterc hoice");
int c=sc.nextInt();
float d;
switch(c)
{
case 1:d=a+b;
System.out.println(d);
				break;
case 2:d=a-b;
System.out.println(d);
				break;
default:System.out.println("sorry");
}
}
}