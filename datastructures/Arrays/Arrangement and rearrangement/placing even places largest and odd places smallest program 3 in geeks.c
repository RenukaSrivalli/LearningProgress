#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7};
int c,t;
int n=sizeof(a)/sizeof(a[0]);
int temp[n];
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
printf("\n");
/*int evenpos=n/2;
int oddpos=n-evenpos;*/
int l=1;
for(int i=0;i<n;i++)
{
    temp[n-i-l]=a[i];
    l++;
}
for(int i=0;i<n;i++)
{
    printf("%d",temp[i]);
}
printf("\n");
int m=0;
for(int i=n-1;i>=n/2;i--)
{
temp[i-1-m]==a[i];
m++;
}

for(int i=0;i<n;i++)
{
    printf("%d",temp[i]);
}
}
