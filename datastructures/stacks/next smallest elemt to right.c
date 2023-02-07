//next smallest element to right
#include<stdio.h>
int main()
{
int a[]={6,2,5,4,5,1,6};
int i;
int n=sizeof(a)/sizeof(a[0]);
int new[n];
int stack[n];
int j=0;
int top=-1;
for(int i=n-1;i>=0;i--)
{
if(top==-1)
{
new[j]=-1;
top++;
stack[top]=a[i];
j++;
}
else if(top!=-1&&stack[top]<a[i])
{
new[j]=top;
top++;
stack[top]=a[i];
j++;
}
else if(top!=-1&&stack[top]>=a[i])
{
while(top!=-1&&stack[top]>=a[i])
{
top--;

}
if(top==-1)
{
new[j]=-1;
j++;
}
else
{
new[j]=top;
j++;
}
for(int k=n-top-2;k>=i;k--)
{
  top++;
  stack[top]=a[k];

}
}

}
for(int i=n-1;i>=0;i--)
{
printf("%d",new[i]);
}
}
