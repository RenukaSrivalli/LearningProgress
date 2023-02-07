import java.io.*;
class StreamsOutput
{
public static void main(String args[]) throws Exception
{
FileOutputStream fos=new FileOutputStream("renu.txt");
fos.write(1);
fos.close();

}
}