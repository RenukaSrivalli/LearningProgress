import java.util.*;
class ListToArray
{
public static void main(String args[])
{
List<Integer> obj=new LinkedList<>();
obj.add(10);
obj.add(20);
System.out.println(obj);
int arr[]=new int[obj.size()];
for(int i=0;i<obj.size();i++)
{
arr[i]=obj.get(i);
}
for(int j=0;j<obj.size();j++)
{
System.out.println(arr[j]);
}
}
}