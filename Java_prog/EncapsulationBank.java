class EncapsulationBank
{
private double balance=10000;
public double getBalance()
{
return balance;
}
public double setBalance(double amount)
{
balance=balance+amount;
return balance;
}
public static void main(String args[])
{
EncapsulationBank b=new EncapsulationBank();
System.out.println("Actual balance is "+b.getBalance());
System.out.println("Updated balance is "+b.setBalance(400000));
}
}