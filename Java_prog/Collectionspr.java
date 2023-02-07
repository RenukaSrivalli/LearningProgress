import java.util.*;
class Collectionspr
{
public static void main(String args[])
{
List<Integer> l=new LinkedList<Integer>();
for(int i=0;i<10;i++)
{
l.add(i);
}
System.out.println(l);
Iterator itr=l.Iterator();
while(itr.hasNext())
{
Integer a=(Integer)itr.next();
System.out.println(a);
}
}
}