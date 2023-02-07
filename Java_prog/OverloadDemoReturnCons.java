import java.util.Scanner;
class OverloadDemoReturnCons
{
 OverloadDemoReturnCons(int x,int y)
{
int z=x+y;
return z;
}
 OverloadDemoReturnCons(float x,double y)
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
OverloadDemoReturnCons obj=new OverloadDemoReturnCons(x,y);
System.out.println("first method value is "+z);
System.out.println("Enter a and b values");
float a=sc.nextFloat();
double b=sc.nextDouble();
OverloadDemoReturnCons obj1=new OverloadDemoReturnCons(a,b);


System.out.println("second method value is "+z);

}
}