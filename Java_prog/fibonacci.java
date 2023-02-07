class fibonacci
{
public static void main(String args[])
{
int a= 0;
int b = 1;
int c=0;
System.out.print(a);
System.out.print(b);
while(c<8)
{

c = a+b;
System.out.print(c);
    a=b;
    b=c;

}
}
}