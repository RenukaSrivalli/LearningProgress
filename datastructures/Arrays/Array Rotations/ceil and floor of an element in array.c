#include<stdio.h>
int main()
{
int a[]={1,3,4,5,8,56,70};
int s=sizeof(a)/sizeof(a[0]);
int n;
printf("enter element");
scanf("%d",&n);
for(int i=0;i<s;i++)
{
if(n==a[i])
{
printf("floor : %d",a[i]);
printf("ceil : %d",a[i]);
}
if(n>a[i]&&n<a[i+1])
{
printf("floor : %d",a[i]);
printf("ceil : %d",a[i+1]);
}
if(n<a[0])
{
printf("floor doesnot exist");
printf("ceil : %d",a[i]);
}
if(n>a[s-1])
{
printf("floor : %d",a[i]);
printf("ceil doesnot exist");
}
}
}
