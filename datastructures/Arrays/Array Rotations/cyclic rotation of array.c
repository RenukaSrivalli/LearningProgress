#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(a[0]);
int temp[n];
int ele=a[n-1];
for(int i=0;i<n;i++)
{
    temp[i+1]=a[i];
}
temp[0]=ele;
for(int i=0;i<n;i++)
{
    printf("%d",temp[i]);
}
}
//{5,1,2,3,4}
