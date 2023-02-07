class Transport
{
	void onAir()
	{
		System.out.println("Examples are Aeroplane,helicopter");
	}
	void onLand()
	{
		System.out.println("Examples are car,bike,lorry");
	}
}
class Cars extends Transport
{
	 void colour()	
	 {
		System.out.println("My car colour is White");
	 }
	 void name()
	 {
		System.out.println("My car name is Volkswagen");
	 }
}
class SingleInheritance
{
	public static void main(String args[])
	{
 Cars obj=new Cars();//We have to create object by child classname as their is extends keyword it call methods of parentclass
 obj.colour();
 obj.name();
 obj.onAir();
 obj.onLand();
}
}
 