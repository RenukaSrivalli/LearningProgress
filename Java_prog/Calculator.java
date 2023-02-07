import java.util.Scanner;
class Calculator
{
public void add(int a,int b)
{
int c=a+b;
System.out.println("Addition of "+a+" and "+b+" is "+c);
}
public void sub(int a,int b)
{
int c=a-b;
System.out.println("Subtraction of "+a+" and "+b+" is "+c);
}
public void mul(int a,int b)
{
int c=a*b;
System.out.println("Multiplication of "+a+" and "+b+" is "+c);
}
public void div(int a,int b)
{
int c=a/b;
System.out.println("Division of "+a+" and "+b+" is "+c);
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter a value");
int a=sc.nextInt();
System.out.println("Enter b value");
int b=sc.nextInt();
Calculator obj=new Calculator();
obj.add(a,b);
obj.sub(a,b);
obj.mul(a,b);
obj.div(a,b);
}
}