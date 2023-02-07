class Shape
{
void draw()
{
System.out.println("drawing");
}
}
class Rectangle extends Shape
{
void draw()
{
super.draw();
System.out.println("Drawing rectangle");
}
}
class Circle extends Shape
{
void draw()
{
System.out.println("Drawing circle");
}
}
class Triangle extends Shape
{
void draw()
{
System.out.println("Drawing triangle");
}
}
class RuntimePolymorphism
{
public static void main(String args[])
{
Shape s;
s=new Rectangle();
s.draw();
s=new Circle();
s.draw();
s=new Triangle();
s.draw();
}
}