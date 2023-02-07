#include<stdio.h>
int main()
{
int a[]={4,5,6,1,7,3};
int n=sizeof(a)/sizeof(a[0]);
int j=1;
int temp;
for(int i=0;i<n-1;)
{
if(j<=n-1)
{
i=0;
}
else
{
i++;
j=i+1;
}
if(a[i]>a[j])
{

temp=a[i];
a[i]=a[j];
a[j]=temp;
}
j++;
}
for(int i=0;i<n;i++)
{

    printf("%d",a[i]);
}
}
