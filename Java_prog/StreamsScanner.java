import java.io.*;
import java.util.Scanner;
class StreamsScanner
{
public static void main(String args[]) throws Exception
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter txt file");
String a=sc.nextLine();
FileInputStream fis=new FileInputStream(a);
int data;
while((data=fis.read())!=-1)
{
System.out.println((char)data);
}
fis.close();
}
}