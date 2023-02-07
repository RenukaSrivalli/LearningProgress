cimport java.util.Scanner;
class Code
{
public void names(String name,int i)
{
System.out.println(i +"."+name);
}
}
class CreationOfObjects
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter strength of class :");
int s=sc.nextInt() ;
int i;

for( i=1;i<=s;++i)
{
   System.out.println("rollno :"+i);
String name=sc.nextLine() ;                        
Code obj=new Code();
obj.names(name,i);
}
}
}