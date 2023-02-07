class ThrowExceptionExplicit
{
public void fun()
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
ThrowExceptionExplicit obj=new ThrowExceptionExplicit();
obj.fun();
}
}