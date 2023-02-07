import java.io.*;
class BufferReader
{
public static void main(String args[]) throws Exception
{
InputStreamReader is=new InputStreamReader("Hi.txt");
BufferedReader br=new BufferedReader(is);
System.out.println("Enter your name");
String name=br.readLine();
System.out.println(name);
}
}