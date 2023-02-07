import java.util.Scanner;
class calci
{
public static void main(String args[])
{
Scanner input=new Scanner(System.in);
double x;
double y;
double z;
System.out.println("Enter num1");
 x=input.nextDouble();
System.out.println("Enter num2");
 y=input.nextDouble();
z=x+y;
System.out.println("The answer is "+ z);
}
}