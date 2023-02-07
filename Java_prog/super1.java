class A
{
void hi()
{
System.out.println("renu");
}
}
class B extends A
{
void hi()
{
System.out.println("bhjn");
}
}
class super1
{
public static void main(String args[])
{
B obj=new B();
obj.hi();
}
}