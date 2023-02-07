class ThrowAndThrowsExcep1
{
	static void fun() 
	{
		System.out.println("Caught inside fun().");
		throw new ArrayIndexOutOfBoundsException("Hi");
		
	}
	public static void main(String args[]) 
	{                                             
	try
	{
		ThrowAndThrowsExcep1.fun();
	}
	catch(ArrayIndexOutOfBoundsException e)
	{
		System.out.println("Caught in main.");
		System.out.println(e);
	}
	}
}