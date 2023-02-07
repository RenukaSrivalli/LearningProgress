#include<stdio.h>
int main()
{
int a[]={7,8,9,10,1,3,2};
int n=sizeof(a)/sizeof(a[0]);
printf("%d",a[n-1]);
int max=a[0];
for(int i=n-2;i>=0;i--)
{
if(a[i]>max)
{
max=a[i];
printf("%d",max);
}
}
}
