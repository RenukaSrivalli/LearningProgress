#include<stdio.h>
int main()
{
    int temp;
int a[]={1,4,6,7,2,3};
int s=sizeof(a)/sizeof(a[0]);
for(int i=0;i<s;i++)
{
for(int j=i+1;j<s;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(int i=0;i<s;i++)
{
printf("%d",a[i]);
}
int i=0;
int j=s-1;
while(i<j)
{
    printf("%d",a[i]);
    i++;
    printf("%d",a[j]);
    j--;
}
if(s%2!=0)
{
    printf("%d",a[i]);
}
}
