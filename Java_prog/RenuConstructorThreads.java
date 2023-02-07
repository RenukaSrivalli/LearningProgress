class RenuConstructorThreads extends Thread
{
String name1;
RenuConstructorThreads(String name)
{
name1=name;
}
public void run()
{
for(int i=0;i<10;i++)
{
System.out.println(name1 + i);

try
{
Thread.sleep(1000);
}
catch(Exception e)
{
}
}
}
public static void main(String args[])
{
RenuConstructorThreads obj=new RenuConstructorThreads("REnuka");
obj.start();
try
{
obj.join();
}
catch(Exception e)
{
}
RenuConstructorThreads obj1=new RenuConstructorThreads("siva");
obj1.start();
}
}