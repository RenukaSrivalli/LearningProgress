class MethodOverriding
{
public void sum()
{
System.out.println("Addition");
}
public void sum()
{
super.sum();
System.out.println("Addition");
}
public static void main(String args[])
{
MethodOverriding obj=new MethodOverriding();
obj.sum();
}
}