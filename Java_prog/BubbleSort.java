import java.util.Scanner;
class BubbleSort
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter array size : ");
int size=sc.nextInt();
int arr[]=new int[size];
System.out.println("Enter array elements : ");
int temp;
for(int i=0;i<size;i++)
{
arr[i]=sc.nextInt();
}
for(int i=0;i<size-1;i++)
{
for(int j=0;j<size-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(int j=0;j<size;j++)
{
System.out.print(arr[j]+" ");
}
}
}