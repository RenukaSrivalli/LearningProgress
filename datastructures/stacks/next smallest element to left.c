//next smallest element to left
#include<stdio.h>
int main()
{
int a[]={4,5,2,10,8};
int i;
int n=sizeof(a)/sizeof(a[0]);
int new[n];
int stack[n];
int j=0;
int top=-1;
for(int i=0;i<n;i++)
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
new[j]=stack[top];
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
new[j]=stack[top];
j++;
}
for(int k=top+1;k<=i;k++)
{
  top++;
  stack[top]=a[k];

}
}

}
for(int i=0;i<n;i++)
{
printf("%d",new[i]);
}
}
