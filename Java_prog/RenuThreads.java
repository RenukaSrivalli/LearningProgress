class RenuThreads extends Thread
{
public static void main(String args[])
{
RenuThreads obj=new RenuThreads();
obj.start();
RenuThreads obj1=new RenuThreads();
obj1.start();
}
public void run()
{
for(int i=0;i<10;i++)
{
//System.out.println("Threads"+i);

try
{
Thread.sleep(1000);
System.out.println("Threads"+i);
}
catch(Exception e)
{
}
//System.out.println("Threads"+i);
}
}
}