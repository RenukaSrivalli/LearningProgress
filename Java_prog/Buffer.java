import java.io.*;
class Buffer
{
public static void main(String args[]) throws Exception
{
InputStreamReader ir=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(ir);
System.out.println("Enter a");
String a=br.readLine();
//int a=Integer.parseInt(br.readLine());
System.out.println("Enter b");
String b=br.readLine();
//int b=Integer.parseInt(br.readLine());
System.out.println(a+b);
}
}
