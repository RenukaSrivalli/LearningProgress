#include<stdio.h>
int main()
{
int ele;
int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(a[0]);
printf("Enter the rotation element");
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
}
