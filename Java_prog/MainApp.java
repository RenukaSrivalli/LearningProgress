interface Car {
	abstract void getName();
	abstract void getMaxSpeed();
/*	public default int applyBreak()
	{
		System.out.println("Applying break on "+getName());
	}*/
	public static String getFastestCar(String a,int b,String c,int d)
	{
		if(b>=d)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
}	
class BMW implements Car {
	public String name;
	public int maxspeed;
	public void getName()
	{
		String name;
	}
	public void getMaxSpeed()
	{
		int  maxSpeed;
	}
	BMW(String n,int m)
	{
	name=n;
		maxspeed=m;
	}
}
class Audi implements Car {
	public String name;
	public int maxspeed;
	public void getName()
	{
		String name;
	}
	public void getMaxSpeed()
	{
		int maxSpeed;
	}
	Audi(String n,int m)
	{
		name= n;
		maxspeed=m;

	}
}
 class MainApp {
	public static void main(String args[])
	{
		//int z=Integer.parseInt(args[0]);
		BMW obj=new BMW("audi",300);
       // int y=Integer.parseInt(args[2]);
	Audi obj1=new Audi("maruthi",200);
	System.out.println("Fastest car is : "+ Car.getFastestCar(obj.name,obj.maxspeed,obj1.name,obj1.maxspeed));
//	System.out.println("Fastest car is : "+ans);
	}
}
