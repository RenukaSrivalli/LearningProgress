import java.io.*;
class ReaderCheck
{
public static void main(String args[]) throws Exception
{
FileOutputStream fr=new FileOutputStream("siva.txt");
fr.write(5);
fr.close();
}
}