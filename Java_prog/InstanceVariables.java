class InstanceVariables
{
int a1;
int b1;
/* void assign(int a,int b)//we can create separate method for assigning variable sto instasnce variable or like we use in perform method
{
a1=a;
b1=b;
}*/
void perform(int a,int b)//if it is a static method we can call directly without crating object but as we are assigning variables to instance varaibles we have to write only public methods coz instance variables alos called only by objects
{
a1=a;
b1=b;
System.out.println(a1);
System.out.println(b1);
}
 void sum()//public method we can call only with creating object
{
System.out.println(a1+b1);
}
public static void main(String args[])
{
int a=10;
int b=20;

InstanceVariables obj=new InstanceVariables();
//obj.assign(a,b);
obj.perform(a,b);
obj.sum();
}
}