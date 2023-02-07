import java.io.*;
class Reader
{
public static void main(String args[]) throws Exception
{
FileReader fr=new FileReader("Hi.txt");
int data;
while((data=fr.read())!=-1)
{
System.out.println((char)data);
}
fr.close();
}
}