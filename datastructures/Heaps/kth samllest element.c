#include<stdio.h>
int main()
{
int a[]={7,10,4,3,20,15};
int n=sizeof(a)/sizeof(a[0]);
int k=3;
int stack[n];
int top=-1;
int arr[n];
int l=0;
for(int i=0;i<n;i++)
{

if(top==-1)
{
top++;
stack[top]=a[i];

}
else if(top!=-1 && stack[top]<=a[i])
{
top++;
stack[top]=a[i];

if(top>=k)
{
top--;

}
}
else if(top!=-1 && stack[top]>a[i])
{
while(top!=-1 && stack[top]>a[i])
{
    arr[l]=stack[top];
top--;
l++;
}

top++;
stack[top]=a[i];
if(top>=k)
{
top--;
}
}
for(int k=l;k>top;k--)
{
top++;
stack[top]=arr[k];

}
}
printf("%d",stack[top]);
}
