interface get
{
public static int getFastestCar(int x,int y)
{
 return x+y;
}
}
class Dec
{
public int x;
public int y;
public void a()
{
int x;
}
public void b()
{
int y;
}
 Dec(int z,int r)
{
 x=z;
 y=r;
}
}
class Max
{
public int maxElement(int x,int y)
{
if(x>y)
{
return x;
}
else
{
return y;

}
}
}
class PassingArgumentsThroughObjects
{
public static void main(String args[])
{

 Dec obj=new Dec(6,5);
System.out.println(obj.x);
System.out.println(obj.y);
//obj.a();
//obj.b();
//obj.c(6,5);
Max obj1=new Max();
System.out.println(obj1.maxElement(obj.x,obj.y));
System.out.println(get.getFastestCar(obj.x,obj.y));
}
}