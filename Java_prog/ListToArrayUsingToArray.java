import java.util.*;
class ListToArrayUsingToArray
{
public static void main(String args[])
{
List<String> obj=new LinkedList<>();
obj.add("renu");
obj.add("siva");
System.out.println(obj);
String arr[]=obj.toArray(new String[obj.size()]);
//foreach
for(String names:arr)
{
System.out.println(names);
}
//for loop
for(int j=0;j<obj.size();j++)
{
System.out.println(arr[j]);
}
}
}