import java.util.*;
class ListToArrays
{
public static void main(String args[])
{
List obj=new LinkedList();
obj.add(1);
obj.add(2);
obj.add(3);
System.out.println(obj);
int arr[]=new int[obj.size()];
for(Object a:obj)
{
System.out.println(a);
}
}
}