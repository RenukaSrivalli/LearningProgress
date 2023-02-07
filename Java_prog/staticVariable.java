class Student
{
int rno;
String name;
static String clg="cd";
Student(int r,String n)
{
rno=r;name=n;
clg="hhh";
}
void display()
{
System.out.println(rno+" "+name+" "+clg);
}
}
public class staticVariable
{
public static void main(String args[])
{
Student obj=new Student(12,"renu");
obj.display();
}
}