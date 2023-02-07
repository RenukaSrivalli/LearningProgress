import java.util.*;
class CursorsIteartor
{
public static void main(String args[])
{
List<String> obj=new LinkedList<String>();
obj.add("vijay");
obj.add("akhil");
obj.add("nagarjuna");
System.out.println(obj);
//If we wnat to print objects one by one we will use cursors
Iterator e=obj.iterator();
while(e.hasNext())
{
String a=(String)e.next();
if(a.equals("vijay"))
{
System.out.println(a);
}
else
{
e.remove();
}
}
System.out.println(obj);
}
}