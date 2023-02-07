package ComparatorCon;
import comaparator.*;
import java.util.*;
class ComparatorMain 
{
public static void main(String args[])
{
LinkedList<String> obj=new LinkedList<String>();
obj.add("renu");
obj.add("siva");
obj.add("nagu");
System.out.println(obj);
Collections.sort(obj,new ComparatorInterface());
System.out.println(obj);
}
}