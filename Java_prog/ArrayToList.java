import java.util.*;
class ArrayToList
{
public static void main(String args[])
{
String arr[]={"renu","siva","nagu"};
List<String> obj=new LinkedList<>();
Collections.addAll(obj,arr);
System.out.println(obj);
}
}