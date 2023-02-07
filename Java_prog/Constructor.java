import java.util.Scanner;
class Constructor
{
Constructor(int a,int b)
{
int c=a+b;
System.out.println("Sum of "+a+" and "+b +" is "+ c);
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter a value");
int a=sc.nextInt();
System.out.println("Enter b value");
int b=sc.nextInt();
Constructor obj=new Constructor(a,b);
}
}