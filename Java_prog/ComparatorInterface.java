package comaparator;
import java.util.Comparator;
class ComparatorInterface implements Comparator<String>
{
public int compare(String o1,String o2)
{
return o2.compareTo(o1);
}
}