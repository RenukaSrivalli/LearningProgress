import java.io.*;
class StreamsCommandLine
{
public static void main(String args[]) throws Exception
{
FileInputStream fis=new FileInputStream(args[0]);
int data;
while((data=fis.read())!=-1)
{
System.out.println((char)data);
}
fis.close();
}
}