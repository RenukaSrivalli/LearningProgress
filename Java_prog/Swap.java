class Swap
{
int a;
int b;
System.out.println(a);
void swap()
{
int temp=a;
a=b;
b=temp;
System.out.println(a);
}
public static void main(String args[])
{
Swap obj=new Swap();
obj.a=10;
obj.b=20;

obj.swap();
}
}