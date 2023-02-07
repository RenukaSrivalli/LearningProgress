import java.util.*;
class CursorsIteartorEvenOdd
{
public static void main(String args[])
{
List<Integer> obj=new LinkedList<Integer>();
for(int i=0;i<10;i++)
{
obj.add(i);

}
System.out.println(obj);
//If we wnat to print objects one by one we will use cursors
Iterator e=obj.iterator();
while(e.hasNext())
{
Integer a=(Integer)e.next();
if(a%2==0)
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