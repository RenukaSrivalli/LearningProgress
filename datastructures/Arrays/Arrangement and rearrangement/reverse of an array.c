#include<stdio.h>
int main()
{
int a[]={1, 2, 3, 4,5, 6 };
int n=sizeof(a)/sizeof(a[0]);
int temp[n];
for(int i=0;i<n;i++)
{
a[i]=a[n-i-1];
}
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
