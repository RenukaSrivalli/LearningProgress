import java.util.Scanner;
class theatre1
{
public static void main(String args[])
{
Scanner input=new Scanner(System.in);
theatre obj=new theatre();
System.out.println("Your favourite movie name ??");
String xMovie=input.newLine();
obj.movie(xMovie);
obj.Result();
}
}
