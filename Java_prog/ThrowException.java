class ThrowException
{
public void fun()
{
int a[]=new int[5];
try
{
a[6]=60;//implicit exxception
}
catch(ArrayIndexOutOfBoundsException e)
{
System.out.println(e);
}
}
public static void main(String args[])
{
ThrowException obj=new ThrowException();
obj.fun();
}
}