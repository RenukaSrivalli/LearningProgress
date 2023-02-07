import java.util.Scanner;
class OverloadDemoReturn
{
public int add(int x,int y)
{
int z=x+y;
return z;
}
public double add(float x,double y)
{
double z=x+y;
return z;
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter x and y values");
int x=sc.nextInt();
int y=sc.nextInt();
OverloadDemoReturn obj=new OverloadDemoReturn();
int ans1=obj.add(x,y);
System.out.println("first method value is "+ans1);
System.out.println("Enter a and b values");
float a=sc.nextFloat();
double b=sc.nextDouble();
double ans2=obj.add(a,b);


System.out.println("second method value is "+ans2);

}
}