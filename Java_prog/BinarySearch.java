import java.util.Scanner;
class BinarySearch
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter array size : ");
int size=sc.nextInt();
int arr[]=new int[size];
System.out.println("Enter array elements : ");
for(int i=0;i<size;i++)
{
arr[i]=sc.nextInt();
}
System.out.println("Enter key element: ");
int key=sc.nextInt();
int low=0;
int high=size-1;
while(low<=high)
{
int mid=(low+high)/2;
	if(key<arr[mid])
	{
		high=mid-1;
	}
	else if(key>arr[mid])
	{
		low=mid+1;
	}
	else if(key==arr[mid])
	{
		System.out.println("Element found at position:" +(mid+1));
		break;
	}
	else
	{
		System.out.println("Element is not found");
	}
}
}
}