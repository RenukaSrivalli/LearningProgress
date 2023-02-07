class Renuka extends Thread
{
int i;
public void run()
{
try
{
for(i=1;i<=70;i++)
{
//System.out.println(i +"is called");

if(i==58)
{
Thread.sleep(2000);
}
if(i!=57)
{
System.out.println(i);
}
else
{
System.out.println(i +"is called");
}
}
}
catch(Exception e)
{
}
}
}
class Attendance
{
public static void main(String args[])
{
Renuka t1=new Renuka();
t1.start();
}
}