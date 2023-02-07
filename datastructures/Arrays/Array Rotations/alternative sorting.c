#include<stdio.h>
void max(int a[],int s,int y)
{
int i;
    int k=0;
int maxele=a[0];
for(i=1;i<s-y;i++)
{
if(a[i]>maxele)
{
    maxele=a[i];
    k=i;
}
}
if(k<s-y)
{
printf("%d",a[k]);
}
f1(k,s-y,a);
}
void f1(int k,int x,int a[])
{
for(int j=k;j<x-1;j++)
{
a[j]=a[j+1];//deeltion of max element
}
}
void min(int a[],int s,int y)
{
    int i;
    int z=0;
int minele=a[0];
for(i=1;i<s-y;i++)
{
if(a[i]<minele)
{
minele=a[i];
z=i;
}
}
if(z<s-y)
{
printf("%d",a[z]);
}
f2(z,s-y,a);
}
void f2(int z,int x,int a[])
{
for(int j=z;j<x-1;j++)
{
a[j]=a[j+1];//deeltion of min element
}
}
int main()
{
int a[]={1, 6, 9, 4, 3, 7, 8, 2};
int s=sizeof(a)/sizeof(a[0]);
int y=0;
for(int i=0;i<(s-y)+i;i++)
{
max(a,s,y);
y++;
min(a,s,y);
y++;
}

}

