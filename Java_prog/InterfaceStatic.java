interface A
{
	public static void add()
	{
		int c=5+5;
		System.out.println("Addition is "+c);
	}
	default void sub()
	{
         int c=9-5;
	   System.out.println("Subtraction is "+c);
	}
}
class InterfaceStatic implements A
{
	public static void main(String args[])
	{
		A.add();//Static methods can also be called with Interface names
		InterfaceStatic obj=new InterfaceStatic();
		obj.sub();
	}
}
