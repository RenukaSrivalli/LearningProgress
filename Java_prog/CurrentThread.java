class CurrentThread implements Runnable
{
public void run()
{
Thread t=Thread.currentThread();
System.out.println(t);
}
public static void main(String args[])
{
 CurrentThread m1=new CurrentThread ();
Thread t1=new Thread(m1);
t1.start();
}
}