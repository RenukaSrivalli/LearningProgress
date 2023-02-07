#include<stdio.h>
int main()
{
int a[]={-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
int n=sizeof(a)/sizeof(a[0]);
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(i==a[j])
{
printf("%d,",i);
break;
}
if(j==n-1&&i!=a[j])
{
printf("-1,");
}
}
}
}
