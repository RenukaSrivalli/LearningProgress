interface A
{
void add();
void sub();
}
interface B
{
void mul();
void div();
}
class C implements A,B
{
public void add()
{
int c=2+3;
System.out.println("Addition is "+c);
}
public void sub()
{
int c=4-3;
System.out.println("Subtraction is "+c);
}
public void mul()
{
System.out.println("Multiplication is "+2*3);
}
public void div()
{
System.out.println("division is "+2/3);
}
}
class TestInterfaceReference1
{
public static void main(String args[])
{
System.out.println("First method for creating reference");
C obj=new C();
A ref;
ref=obj;
ref.add();
ref.sub();
//ref.mul(); cannot be executed bcoz we created referece for only for A so only A methods are executed
//ref.div();
//Now mul() and div() are executed if we create reference for B
B ref1;
ref1=obj;
ref1.mul();
ref1.div();
System.out.println("Second method for creating reference");
A ref2=new C();
ref2.add();
ref2.sub();
B ref3=new C();
ref3.mul();
ref3.div();
}
}