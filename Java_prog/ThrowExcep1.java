class ThrowExcep1
{
	static void fun() 
	{
	try 
	{
		throw new ArrayIndexOutOfBoundsException("Hi");
		
	}
	catch(ArrayIndexOutOfBoundsException e)
	{
		System.out.println("Caught inside fun().");
            throw e;//rethrowing
	}
	}
	public static void main(String args[]) 
	{                                             
	try
	{
		ThrowExcep1.fun();
	}
	catch(ArrayIndexOutOfBoundsException e)
	{
		System.out.println("Caught in main.");
	}
	}
}