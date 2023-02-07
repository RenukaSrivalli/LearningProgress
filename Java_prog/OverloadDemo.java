class OverloadDemo
{
public void add(int x,int y)
{
int z=x+y;
System.out.println("first method value is "+ z);
}
public void add(float x,double y)
{
double z=x+y;
System.out.println("second method value is "+ z);
}
public static void main(String args[])
{
OverloadDemo obj=new OverloadDemo();
obj.add(5,4);
obj.add(4.5f,88.9);
}
}
