import java.io.*;
class StreamOuput
{
public static void main(String args[]) throws Exception
{
FileOutputStream fos=new FileOutputStream("renu.txt");
fos.write(5);
fos.close();
}
}