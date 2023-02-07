class InterThreadCommunication
{
public static void main(String args[])
{
MainCode obj=new MainCode();
Producer t1=new Producer(obj);
Consumer t2=new Consumer(obj);
t1.start()
t2.start()
}
}
class Producer extends Thread
{
MainCode m;
Producer(MainCode m)
{
this.m=m;
}
public void run()
{
m.put();
}
}
class Consumer extends Thread
{
MainCode n;
Consumer(MainCode n)
{
this.n=n;
}
public void run()
{
m.get();
}
}
class MainCode
{
int items=0;
public void put()
{
while(items!=0)
{
wait();
}
items++;
return items;
notify();
}
public void get()
{
while(items==0)
{
wait();
}
notify();
}