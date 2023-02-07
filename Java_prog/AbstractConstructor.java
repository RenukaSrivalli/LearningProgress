abstract class Hi
{
public Hi(int a)
{
System.out.println("My name is renu"+a);
}
abstract void reg();
}
class AbstractConstructor extends Hi
{
AbstractConstructor()
{
super(2);
}
public void reg()
{
System.out.println("1257");
}
public static void main(String args[])
{
AbstractConstructor obj=new AbstractConstructor();
obj.reg();
}
}