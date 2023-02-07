import java.util.Scanner;
class FibonacciSeries
{
public static void main(String args[])
{
	Scanner input=new Scanner(System.in);
	//System.out.print("Command Line Arguments: ");
	int z=input.nextInt();
   int a=0;
   int b=1;
   int c;
   for(int i=0;i<z;i++)
   {
   	c=a+b;
   	System.out.print(" "+a);
   	a=b;
   	b=c;
   }
}
}