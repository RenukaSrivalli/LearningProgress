class MultiDemo implements Runnable
{
public void run()
{
System.out.println("Thread is running");
}
public static void main(String args[])
{
MultiDemo m1=new MultiDemo();
Thread t1=new Thread(m1);
t1.start();
}
}