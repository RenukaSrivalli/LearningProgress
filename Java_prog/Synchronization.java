class Synchronization implements Runnable
{
int count;
public synchronized void run()
{
for(int i=0;i<10000;i++)
{
count++;
}
System.out.println(count);
}
public static void main(String args[])
{
Synchronization obj=new Synchronization();
Thread t1=new Thread(obj);
Thread t2=new Thread(obj);
System.out.println(t1.isAlive());//here just we created threads its exectionn not started
t1.start();
t2.start();
System.out.println(t1.isAlive());
System.out.println(t2.isAlive());
}
}