#include<stdio.h>
int main()
{
int a[]={1,3,0,0,1,0,0};
int i;
int n=sizeof(a)/sizeof(a[0]);
int new[n];
for(i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[j]>a[i])
{
new[i]=a[j];
break;
}
new[i]=-1;
}
}
new[i]=-1;
for(i=0;i<n;i++)
{
printf("%d",new[i]);
}
}
