import java.io.*;
class FileCreationAndWriting 
{
public static void main(String args[]) throws Exception
{
File f=new File("C:\\javaprog\\learn.txt");
if(f.createNewFile())
{
System.out.println("Filecreated");
}
else
{
System.out.println("File already exits");
}
FileWriter fw=new FileWriter("learn.txt");
fw.write("FileCreationAndWriting");
fw.close();
}
}