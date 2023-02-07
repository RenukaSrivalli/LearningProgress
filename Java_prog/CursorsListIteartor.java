import java.util.*;
class CursorsListIteartor
{
public static void main(String args[])
{
List<String> obj=new LinkedList<String>();
obj.add("vijay");
obj.add("akhil");
obj.add("mahesh");
obj.add("venkatesh");
System.out.println(obj);
//If we wnat to print objects one by one we will use cursors
ListIterator e=obj.listIterator();
while(e.hasNext())
{
String a=(String)e.next();
if(a.equals("vijay"))
{
System.out.println(a);
}
else if(a.equals("akhil"))
{
e.set("nagarjuna");
}
else if(a.equals("mahesh"))
{
e.add("Krishna");
}
else if(a.equals("venkatesh"))
{
e.remove();
}
}
System.out.println(obj);
while(e.hasPrevious())
{
String b=(String)e.previous();
System.out.println(b+e.nextIndex());
}
}
}