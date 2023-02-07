class Calci
{
void add(int a,int b)
{
int c=a+b;
System.out.println(c);
}
void sub(int a,int b)
{
int c=a-b;
System.out.println(c);
}
}
class Calci1 extends Calci
{


void add(int a,int b)
{
super.add(15,15);
int c=a+b;
System.out.println(c);
//super.add(15,15);
}
void sub(int a,int b)
{
int c=a-b;
System.out.println(c);
super.sub(15,25);
}
}
class Super
{
public static void main(String args[])
{
Calci1 obj=new Calci1();
obj.add(5,5);
obj.sub(5,5);
}
}