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
class Bikes extends Transport
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

class Heirachial
{
	public static void main(String args[])
	{
Cars obj1=new Cars();
obj1.carColour();
obj1.carName();
obj1.onLand();
obj1.onAir();
Bikes obj2=new Bikes();
obj2.bikeColour();
obj2.bikeName();
obj2.onLand();
obj2.onAir();


}
}
 