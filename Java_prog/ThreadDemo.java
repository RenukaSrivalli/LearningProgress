class ThreadDemo extends Thread
{
 public void run()
{
System.out.println("run method is excuted by JVM");
}
public static void main(String args[])
{
ThreadDemo obj=new ThreadDemo();
Thread obj1=new Thread(obj);
obj1.start();
}
}
