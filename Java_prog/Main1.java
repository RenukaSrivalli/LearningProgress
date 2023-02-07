abstract class AbstractDemo
{
abstract void add(int a,int b);
void sub(int a,int b)
{
int c=a-b;
System.out.println(c);
}
}
class Calling extends AbstractDemo
{
void add(int a,int b)
{
int c=a+b;
System.out.println(c);
}
}
class Main1
{
public static void main(String args[])
{
  Calling obj=new Calling();
	obj.add(4,5);
	obj.sub(10,5);
}
}