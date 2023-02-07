#include<stdio.h>
int main()
{
int a[]={10, 20, 15, 2, 23, 90, 67};
int s=sizeof(a)/sizeof(a[0]);
for(int i=1;i<s-1;i++)
{
if(a[i]>a[i-1]&&a[i]>a[i+1])
{
printf("peak element is %d",a[i]);
}
}
}
