class Sum
{
int x;
int y;
Sum(int x,int y)
{
System.out.println(x+y);
this.x=x;
this.y=y;
}
public void display()
{
System.out.println("x value is :"+x);
System.out.println("y value is :"+y);
}
}
class ConstructorInstance
{
public static void main(String args[])
{
int x=Integer.parseInt(args[0]);
int y=Integer.parseInt(args[1]);
Sum obj=new Sum(x,y);
obj.display();
}
}