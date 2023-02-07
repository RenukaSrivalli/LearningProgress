import java.util.*;
class SortArrayList
{
public static void main(String args[])
{
List<Integer> obj=new LinkedList<Integer>();
obj.add(50);
obj.add(100);
obj.add(20);
obj.add(500);
System.out.println(obj);
Collections.sort(obj);
//Itearting through foreach
for(Integer order:obj)
{
System.out.println(order);
}
}
}