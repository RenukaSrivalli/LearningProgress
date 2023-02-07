class Shape
{
void draw()
{
System.out.println("Drawing");
}
}
class Rectangle extends Shape
{
void draw()
{
System.out.println("Drawing Rectangle");
}
}
class Traingle extends Shape
{
void draw()
{
super.draw();
System.out.println("Drawing Triangle");
}
}
class RunTimePoly
{
public static void main(String args[])
{
/*Shape s;
s=new Rectangle();
s.draw();
s=new Triangle();
s.draw();*/
Traingle obj=new Traingle();
obj.draw();
}
}