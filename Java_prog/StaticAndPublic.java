class StaticAndPublic
{
static void staticMethod()
{
System.out.println("Static methods can be called directly without creating object");
}
public void publicMethod()
{
System.out.println("Public methods can be called by creating an object");
}
public static void main(String args[])
{
int count=0;
staticMethod();
StaticAndPublic obj=new StaticAndPublic();
obj.publicMethod();
count++;
System.out.println("No of objects cretaed is : "+count);
}
}