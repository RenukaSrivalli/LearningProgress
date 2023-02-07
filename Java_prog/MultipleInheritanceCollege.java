interface Student
{
void studentCount();
}
interface Faculty
{
 void facultyCount();
}
class College implements Student,Faculty
{
public void studentCount()
{
System.out.println("1000");
}
public void facultyCount()
{
System.out.println("100");
}
}
class MultipleInheritanceCollege
{
public static void main(String args[])
{
College obj=new College();
obj.studentCount();
obj.facultyCount();
}
}