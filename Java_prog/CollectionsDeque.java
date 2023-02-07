import java.util.*;
class CollectionsDeque
{
public static void main(String args[])
{
Deque<String> obj=new ArrayDeque<String>();
obj.add("RENU");
obj.add("nagu");
obj.add("siva");
obj.add("reddy");
System.out.println(obj);
obj.remove();//remove used to remove first element as it is Queue
System.out.println(obj);
System.out.println(obj);
Deque<Float> obj1=new LinkedList<Float>();//By using Deque we can implement LinkedListclass and ArrayDeque class
obj1.add(6.7f);
obj1.add(8.9f);
obj1.add(8.0f);
System.out.println(obj1);

}
}