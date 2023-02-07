class ConstructorOverload
{
ConstructorOverload(int a,int b)
{
int c=a+b;
System.out.println("result is"+c);
}
ConstructorOverload(String x,float y)
{
System.out.println(x+" age is "+y);
}
public static void main(String args[])
{
ConstructorOverload obj=new ConstructorOverload(10,10);
ConstructorOverload obj1=new ConstructorOverload("renu",18);
}
}