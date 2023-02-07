#include<stdio.h>
int main()
{
int a[]={8,9,1,3,2};
int n=sizeof(a)/sizeof(a[0]);
int t;
int count=0;
int temp[n];
int arr[1];
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}
for(int i=0;i<n;i++)
{
if(a[i]!=temp[i])
{
    count++;
for(int j=0;j<1;j++)
{
arr[j]=temp[j];
}
for(int k=1;k<n;k++)
{
temp[k-1]=temp[k];
}
for(int l=0;l<1;l++)
{
temp[(n-1)+l]=arr[l];
}
}
for(int i=0;i<n;i++)
{
if(a[i]==temp[i]&&i==n-1)
{
printf("Np of rotations to get sorted array is %d",count);
break;
}
}
}
}
