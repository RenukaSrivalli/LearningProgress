import java.io.*;
class StreamsInputAndOutput
{
public static void main(String args[]) throws Exception
{
FileInputStream fis=new FileInputStream("Hi.txt");
FileOutputStream fos=new FileOutputStream("renu.txt");
int data;
while((data=fis.read())!=-1)
{
fos.write(data);
}
fis.close();

fos.close();

}
}