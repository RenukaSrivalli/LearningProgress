class Hello extends Exception
{
}
class UserDefinedException
{
public static void main(String args[])
{
try
{
throw new Hello();
}
catch(Hello e)
{
System.out.println(e);
}
}
}