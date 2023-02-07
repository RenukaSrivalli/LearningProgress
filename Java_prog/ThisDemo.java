class ThisDemo
{
int x,y;//THis keyword access only instance variables
public void add(int x,int y)
{
x=x;
y=y;
System.out.println(x);
System.out.println(y);
}
public static void main(String args[])
{
ThisDemo obj=new ThisDemo();
obj.add(5,10);
}
}