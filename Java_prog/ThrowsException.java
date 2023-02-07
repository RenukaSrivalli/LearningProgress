class ThrowsException
{
public void fun() throws Exception
{
int a[]=new int[5];
try
{
//a[6]=60;implicit exxception
throw new ArrayIndexOutOfBoundsException("Hi");
}
catch(ArrayIndexOutOfBoundsException e)
{
System.out.println(e);
}
}
public static void main(String args[])
{
ThrowsException obj=new ThrowsException();
try
{
obj.fun();
}
catch(Exception e)
{
System.out.println("No exception");
}
}
}