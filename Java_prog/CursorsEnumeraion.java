import java.util.*;
class CursorsEnumeraion
{
public static void main(String args[])
{
Vector<String> obj=new Vector<String>();
obj.add("vijay");
obj.add("akhil");
obj.add("nagarjuna");
System.out.println(obj);
//If we wnat to print objects one by one we will use cursors
Enumeration e=obj.elements();
while(e.hasMoreElements())
{
String a=(String)e.nextElement();
System.out.println(a);
}
}
}