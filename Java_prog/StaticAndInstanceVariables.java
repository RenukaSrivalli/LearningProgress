class StaticAndInstanceVariables
{
static int a=10;
int b=20;
public static void main(String[] args)
{
int c=30;

System.out.println(StaticAndInstanceVariables.a);
System.out.println(c);

StaticAndInstanceVariables obj=new StaticAndInstanceVariables();
int d=obj.b;
System.out.println(d);
}
}