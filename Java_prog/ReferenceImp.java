class Parent
{
public void parentPrint()
{
System.out.println("In Parent Print1");
}
public static void staticMethod()
{
System.out.println("In staticMethod1");

}
}
class Child extends Parent
{
public void parentPrint()
{
System.out.println("In Parent Print2");

}
public static void staticMethod()
{
System.out.println("In staticMethod2");

}
}
class ReferenceImp
{
public static void main(String args[])
{
Parent p=new Child();
p.parentPrint();
p.staticMethod();//calls parent class staticMrthod though it is their in child class bcz of static keyword
}
}