#include<stdio.h>
int main()
{
int n;
int a[]={1,2,3,4,-2-3};
int s=sizeof(a)/sizeof(a[0]);
printf("enter a number");
scanf("%d",&n);
for(int i=0;i<s-1;i++)
{
for(int j=i+1;j<s;j++)
{
if(a[i]+a[j]==n)
{
printf("{%d,%d}",a[i],a[j]);
}
if(a[i]+a[j]!=n&&i==s-1)
{
printf("No valid pair exits for %d",n);
}

}
}

}
