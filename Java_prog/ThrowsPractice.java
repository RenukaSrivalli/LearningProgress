import java.io.*;
class A
{
public void Hello() throws Exception
{
int c=3/0;
System.out.println("Answer is"+c);
}
}
class ThrowsPractice
{
public static void main(String args[])
{
try
{
A obj=new A();
obj.Hello();
}
catch(Exception e)
{
System.out.println(e);
}
}
}