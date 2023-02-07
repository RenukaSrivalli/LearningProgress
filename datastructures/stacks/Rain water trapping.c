#include<stdio.h>
int main()
{
int a[]= {0,1,0,2,1,0,1,3,2,1,2,1};
int n=sizeof(a)/sizeof(a[0]);
int stack[n];
int top=-1;
int newl[n];
int newr[n];
int arr[n];
int fnewr[n];
int j=0;
int ans=0;
for(int i=0;i<n;i++)
{
if(top==-1)
{
top++;
stack[top]=a[i];
newl[j]=a[i];
j++;
}
else if(top!=-1 && stack[top]<a[i])
{
top++;
stack[top]=a[i];
newl[j]=a[i];
j++;
}
else if(top!=-1 && stack[top]>=a[i])
{
newl[j]=stack[top];
j++;
}
}
for(int i=0;i<n;i++)
{
printf("%d",newl[i]);
}
printf("\n");
j=0;
top=-1;
for(int i=n-1;i>=0;i--)
{
if(top==-1)
{
top++;
stack[top]=a[i];
newr[j]=a[i];
j++;
}
else if(top!=-1 && stack[top]<a[i])
{
top++;
stack[top]=a[i];
newr[j]=a[i];
j++;
}
else if(top!=-1 && stack[top]>=a[i])
{
newr[j]=stack[top];
j++;
}
}
int k=0;
for(int i=n-1;i>=0;i--)
{
fnewr[k]=newr[i];
k++;
}
for(int i=0;i<n;i++)
{
printf("%d",fnewr[i]);
}
printf("\n");
for(int i=0;i<n;i++)
{
    if(fnewr[i]<=newl[i])
    {
        arr[i]=fnewr[i];
    }
    if(newl[i]<=fnewr[i])
    {
        arr[i]=newl[i];
    }
}
for(int i=0;i<n;i++)
{
    ans=ans+arr[i]-a[i];
}
printf("%d",ans);
}
