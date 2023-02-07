import java.io.*;
class Streams
{
public static void main(String args[]) throws Exception
{
FileInputStream fis=new FileInputStream("Hi.txt");
int data;
while((data=fis.read())!=-1)
{
System.out.println((char)data);
}
fis.close();
}
}