import java.io.*;
class ReaderNumber
{
public static void main(String args[]) throws Exception
{
FileReader fr=new FileReader("hi");
int data;
System.out.println(data);
while((data=fr.read())!=-1)
{
System.out.println((char)data);
}
fr.close();
}
}