class A
{
public A()
{
System.out.println("Hi");
}
}
class B extends A
{
public B()
{
System.out.println("Hello");
}
}
class ConstructorMain
{
public static void main(String args[])
{
B obj=new B();
}
}