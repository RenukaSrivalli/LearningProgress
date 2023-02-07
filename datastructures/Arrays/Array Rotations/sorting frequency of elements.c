#include<stdio.h>
int ele(int,int,int,int);
int main()
{
int a[]={3, 3, 4, 2, 4, 4, 2, 4};
int s=sizeof(a)/sizeof(a[0]);
int max=1;
int z;
int l=0;
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
ele(max+1,z,s,l);
    l++;
}
//printf("The frequecny of %d is %d",z,max+1);
/*for(int i=0;i<s;i++)
{
    ele(max,z,s,l);
    l++;
}*/
}
void ele(int maxres,int z,int s,int l)
{
    int arr[s];
for(int i=1;i<=maxres;i++)
{
    int res=0;
    arr[l+res]=z;
    res++;
}
}
