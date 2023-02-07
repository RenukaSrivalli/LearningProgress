public class Demo
{
	public void values()
	{
		System.out.println("Enter the byte value: "+x);
		System.out.println("Enter the short value: "+y);
		System.out.println("Enter the int value: "+z);
		System.out.println("Enter the long value: "+a);
		System.out.println("Enter the boolean value: "+b);
        System.out.println("Enter the double value: "+c);
        System.out.println("Enter the float value: "+d);
        System.out.println("byte default value = "+e);
        System.out.println("short default value = "+f);
        System.out.println("int default value = "+g);
        System.out.println("long default value = "+h);
        System.out.println("boolean default value = "+i);
        System.out.println("double default value = "+j);
        System.out.println("float default value = "+k);
	}
}
import java.util.Scanner;
class PrimitiveTypes
{
	static byte e;
	static short f;
	static int g;
	static long h;
	static boolean i;
	static double j;
	static float k;
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		Demo obj=new Demo();
		byte x=input.nextByte();
		short y=input.nextShort();
		int z=input.nextInt();
		long a=input.nextLong();
		boolean b=input.nextboolean();
		double c=input.nextDouble();
		float d=input.nextFloat();
		obj.values();
	}
}
		
		