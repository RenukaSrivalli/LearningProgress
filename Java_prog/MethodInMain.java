import java.util.Scanner;
class MethodInMain
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter a value");
int a= sc.nextInt();
System.out.println("Enter b value");
int b= sc.nextInt();
Result obj=new Result();
obj.sum(a,b);
}
}