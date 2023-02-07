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
	 void carColour()	
	 {
		System.out.println("My car colour is White");
	 }
	 void carName()
	 {
		System.out.println("My car name is Volkswagen");
	 }
}
class Bikes extends Cars
{
	 void bikeColour()	
	 {
		System.out.println("My bike colour is Green");
	 }
	 void bikeName()
	 {
		System.out.println("My bike name is FZ");
	 }
}

class MultilevelInheritance
{
	public static void main(String args[])
	{
 //We have to create object by child classname as their is extends keyword it call methods of parentclass
/*Cars obj=new Cars();
 obj.onAir();
 obj.onLand();*/
//WE can directly call by grandchild 
Bikes obj1=new Bikes();
obj1.bikeColour();
obj1.bikeName();
obj1.carColour();
obj1.carName();
obj1.onAir();
 obj1.onLand();
}
}
 