#include<stdio.h>
int main()
{
    int z;
int a[]={1,2,3,4};
int n=sizeof(a)/sizeof(a[0]);
int min=a[0];
for(int i=1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
z=i;
}
}
printf("No of rotations are %d",z);
}
