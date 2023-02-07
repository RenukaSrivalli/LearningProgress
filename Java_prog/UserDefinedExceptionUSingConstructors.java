class IAmException extends Exception
{
String a;
IAmException(String a)
{
this.a=a;
}
public String Hi()
{
return a;
}
}
class UserDefinedExceptionUSingConstructors
{
public static void main(String args[])
{
try
{
throw new IAmException("Welcome");
}
catch(IAmException e)
{
System.out.println("I am user defined exception");
System.out.println(e.Hi());

}
}
}