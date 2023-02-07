interface A
{
void add();
}
interface B extends A
{
void sub();
}
class C implements B
{
public void add()
{
System.out.println("Addition is performed");
}
public void sub()
{
System.out.println("Subtraction is performed");
}
}
class InterfaceAndExtends
{
public static void main(String args[])
{
C obj=new C();
B ref;
ref=obj;
ref.add();//though there is no add method in B but coz of extends B has add() and sub() so we can call both by creaing reference to only B
ref.sub();
//obj.add();
//obj.sub();
}
}