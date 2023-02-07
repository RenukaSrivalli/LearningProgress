#include<stdio.h>
int main()
{
int a[]={1,3,5,7,9};
int ele;
int n=sizeof(a)/sizeof(a[0]);
int temp[ele];
printf("Enter rotation");
scanf("%d",&ele);
for(int i=0;i<ele;i++)
{
temp[i]=a[n-i-1];
}
for(int i=0;i<n-ele;i++)
{
a[n-i-1]=a[n-ele-i-1];
}
for(int i=0;i<ele;i++)
{
a[ele-i-1]=temp[i];
}
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
