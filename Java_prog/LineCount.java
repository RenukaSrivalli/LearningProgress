import java.io.*;
import java.util.*;
class LineCount
{
public static void main(String args[])throws Exception
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter file name");
String fout=sc.nextLine();
FileInputStream fin=new FileInputStream(fout);
InputStreamReader isr=new InputStreamReader(fin);
BufferedReader br=new BufferedReader(isr);
int Charcount=0;
int LineCount=0;
int WordCount=0;
String line;
while((line=br.readLine())!=null)
{
LineCount++;
String words[]=line.split(" ");
WordCount=WordCount+words.length;
for(int i=0;i<words.length;i++)
{
Charcount=Charcount+words[i].length();
}
}
System.out.println("LineCount"+LineCount);
System.out.println("WordCount"+WordCount);
System.out.println("CharCount"+Charcount);
}
}