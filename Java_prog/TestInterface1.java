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
    c=2+3;
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
class TestInterface1
{
public static void main(String args[])
{
C obj=new C();
obj.add();
obj.sub();
obj.mul();
obj.div();
}
}