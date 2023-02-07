class Method
{
public synchronized void mul(int num)
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
Method m;
Renuka(Method m)
{
this.m=m;
}
public void run()
{
m.mul(2);
}
}
class Srivalli extends Thread
{
Method n;
Srivalli(Method n)
{
this.n=n;
}

public void run()
{
n.mul(5);
}
}
class Synchronized
{
public static void main(String args[])
{
Method obj=new Method();
Renuka t1=new Renuka(obj);
t1.start();
Srivalli t2=new Srivalli(obj);
t2.start();
}
}