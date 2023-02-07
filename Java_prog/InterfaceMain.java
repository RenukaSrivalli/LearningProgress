interface A
{
void add(int a,int b);
}
interface B
{
void sub(int a,int b);
}
class Child implements A,B
{
public void add(int a,int b)
{
int c=a+b;
System.out.println(c);
}
public void sub(int a,int b)
{
int c=a-b;
System.out.println(c);
}
}
class InterfaceMain
{
public static void main(String args[])
{
Child obj=new Child();
obj.add(5,5);
obj.sub(5,5);
}
}