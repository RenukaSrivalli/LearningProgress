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
printf("\n");
for(int i=0;i<s;i+=2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
for(int i=0;i<s;i++)
{
printf("%d",a[i]);
}

}
