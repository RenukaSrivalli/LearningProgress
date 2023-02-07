class BoxConstructorOverload
{
double width;
double height;
double depth;
double res;
BoxConstructorOverload()
{
width=-1;
height=-1;
depth=-1;
}
BoxConstructorOverload(double length)
{
width=length;
height=length;
depth=length;
}
BoxConstructorOverload(double width,double height,double depth)
{
this.width=width;
this.height=height;
this.depth=depth;
}
public void volume()
{
res=width*height*depth;
System.out.println("Volume of box is "+res);
}
public static void main(String args[])
{
if(args.length==0)
{
BoxConstructorOverload b1=new BoxConstructorOverload();
b1.volume();
}
if(args.length==1)
{
double z=Double.parseDouble(args[0]);
BoxConstructorOverload b1=new BoxConstructorOverload(z);
b1.volume();
}
if(args.length==3)
{
double l=Double.parseDouble(args[0]);
double m=Double.parseDouble(args[1]);
double n=Double.parseDouble(args[2]);
BoxConstructorOverload b1=new BoxConstructorOverload(l,m,n);
b1.volume();
}
}
}
