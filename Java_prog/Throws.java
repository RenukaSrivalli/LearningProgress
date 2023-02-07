class Throws
{
static void a() //We can write throws Exception here also
{
int a=10;
int b=0;
int c=a/b;//exception occurs so goes to catch block
System.out.println(c);
}
public static void main(String args[]) throws Exception
{
try
{
a();
}
catch(Exception e)
{
System.out.println(e);
}
}
}