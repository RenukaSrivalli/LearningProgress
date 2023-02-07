class Method
{
synchronized static void mul(int num)
{
try
{
for(int i=0;i<=10;i++)
{
System.out.println(num +"x"+ i + "=" + num*i);
Thread.sleep(1000);
}
}
catch(Exception e){}
}
}
class Renuka extends Thread
{
public void run()
{
Method.mul(2);
}
}
class Srivalli extends Thread
{
public void run()
{
Method.mul(5);
}
}
class StaticSynchronized
{
public static void main(String args[])
{
Method obj=new Method();
Renuka t1=new Renuka();
t1.start();
Srivalli t2=new Srivalli();
t2.start();
}
}