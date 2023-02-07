class RenuConstructorThreadsWithoutTry extends Thread
{
String name1;
RenuConstructorThreadsWithoutTry(String name)
{
name1=name;
}
public void run()
{
for(int i=0;i<10;i++)
{
System.out.println(name1 + i);
}
}
public static void main(String args[])
{
RenuConstructorThreadsWithoutTry obj=new RenuConstructorThreadsWithoutTry("REnuka");
obj.start();
RenuConstructorThreadsWithoutTry obj1=new RenuConstructorThreadsWithoutTry("siva");
obj1.start();
}
}