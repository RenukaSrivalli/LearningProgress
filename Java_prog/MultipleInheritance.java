interface P1
{
void show();
}
interface P2
{
void show1();
}
class MultipleInheritance implements P1,P2
{
public void show()
{
System.out.println("In p1 show method");
}
public void show1()
{
System.out.println("In p1 show method");

}

public static void main(String args[])
{
MultipleInheritance obj=new MultipleInheritance();
obj.show();
obj.show1();
}
}

