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

class MultilevelInheritanceUsingReferenceVariable
{
	public static void main(String args[])
	{
Transport T;
T=new Cars();
T.carColour();
T.carName();
T=new Bikes();
T.bikeColour();
T.bikeName();

}
}
 