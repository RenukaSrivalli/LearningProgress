class StaticAndInstanceMethods
{
public static int add(int a,int b)
{
int c=a+b;
System.out.println(c);
return c;
}
public void sub(int a,int b)
{
int c=a-b;
System.out.println(c);
}
public static void main(String args[])
{
StaticAndInstanceMethods.add(5,5);
System.out.println(add(5,5));
StaticAndInstanceMethods obj=new StaticAndInstanceMethods();
obj.sub(5,5);
}
}
