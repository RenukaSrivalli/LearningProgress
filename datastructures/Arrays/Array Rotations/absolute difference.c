#include<stdio.h>
void min(int,int,int,int);
int main()
{
int n;
int a[]={10, 5, 3, 9,2};
int s=sizeof(a)/sizeof(a[0]);
int b[s];
printf("Enter element");
scanf("%d",&n);
for(int i=0;i<s;i++)
{
int ans=n-a[i];
if(ans>=0)
{
b[i]=ans;
}
else
{
b[i]=-ans;
}
}
for(int i=0;i<s;i++)
{

    printf("%d",b[i]);
}
for(int i=0;i<s;i++)
{
    minf(a,b,s,n);
}
}
void minf(int a[],int b[],int s,int n)
{
    int min=b[0];
    int z;
for(int i=0;i<s;i++)
{
if(b[i]<=min)
{
min=b[i];
z=i;
}
}
for(int i=0;i<s;i++)
{
if(min+a[i]==n)
{
printf("%d",a[i]);
}
}
if(z!=s)
{
for(int k=z;k<s;k++)
{
b[k]=b[k+1];
}
}
else{
    for(int k=z;k<s-1;k++)
    {
        b[k]=b[k];
    }
}
}


