#include<stdio.h>
int main()
{
int a[]={1,3,5,7,9};
int n=sizeof(a)/sizeof(a[0]);
int ele;
int arr[n];
for(int i=0;i<n;i++)
{
    arr[i]=a[i];
}
for(int i=0;i<n;i++)
{
printf("Enter rotation element");
scanf("%d",&ele);
int temp[ele];
for(int i=0;i<ele;i++)
{
temp[i]=a[i];
}
for(int i=ele;i<n;i++)
{
a[i-ele]=a[i];
}
for(int i=0;i<ele;i++)
{
a[(n-ele)+i]=temp[i];
}
printf("After rotation by %d ",ele);
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(int i=0;i<n;i++)
{
a[i]=arr[i];
}
}
}
