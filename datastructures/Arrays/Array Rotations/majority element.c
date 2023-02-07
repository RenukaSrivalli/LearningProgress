#include<stdio.h>
int main()
{
int a[]={3, 3, 4, 2, 4, 4, 2, 4};
int s=sizeof(a)/sizeof(a[0]);
int h=s/2;
int max=1;
int z;
for(int i=0;i<s;i++)
{
int count =0;
for(int j=i+1;j<s;j++)
{
if(a[i]==a[j])
{
count++;
if(count>=max)
{
    z=a[i];
max=count;
}
}
}
}
printf("The frequecny of %d is %d",z,max+1);
printf("\n");
if(max+1>h)
{
   printf("%d is a majority element",z);
}
else
{
    printf("No majority element");
}
}
