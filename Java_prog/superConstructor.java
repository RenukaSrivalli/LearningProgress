class hlo
{
public hlo(String c)
{
System.out.println("renu");
}
}
class hi extends hlo
{
public void name()
{
System.out.println("siva");
super("srivalli");
}
}
class superConstructor 

{
public static void main(String args[])
{
hi obj=new hi();
obj.name();
}
}