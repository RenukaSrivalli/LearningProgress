class IAmException extends Exception
{
}
public class A
{
public static void main(String args[])
{
try
{
throw new IAmException();
}
catch(IAmException ex)
{
System.out.println(ex);
}
}
}