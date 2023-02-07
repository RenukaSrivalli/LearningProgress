import java.util.*;
class ArrayToListUsingForEach
{
public static void main(String args[])
{
String arr[]={"renu","siva","nagu"};
List<String> obj=new LinkedList<>();
for(String names:arr)
{
obj.add(names);
}
System.out.println(obj);

}
}