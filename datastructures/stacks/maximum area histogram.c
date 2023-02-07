//maximum area of histogram
#include<stdio.h>
int main()
{
int a[]={2,4,6,8,10};
int n=sizeof(a)/sizeof(a[0]);
int newl[n];
int newr[n];
int fnewr[n];
int stack[n];
int res[n];
int top=-1;
int j=0;
for(int i=0;i<n;i++)
{
if(top==-1)
{
newl[j]=-1;
top++;
stack[top]=a[i];
j++;
}
else if(top!=-1&&stack[top]<a[i])
{
newl[j]=top;
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
newl[j]=-1;
j++;
}
else
{
newl[j]=top;
j++;
}
for(int k=top+1;k<=i;k++)
{
top++;
stack[top]=a[k];
}
}
}
top=-1;
j=0;
for(int i=n-1;i>=0;i--)
{
if(top==-1)
{
newr[j]=n;
top++;
stack[top]=a[i];
j++;
}
else if(top!=-1&&stack[top]<a[i])
{
newr[j]=top;
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
newr[j]=n;
j++;
}
else
{
newr[j]=top;
j++;
}
for(int k=n-top-2;k>=i;k--)
{
  top++;
  stack[top]=a[k];

}
}

}
int k=0;
for(int i=n-1;i>=0;i--)
{
    if(newr[i]==n)
    {
        fnewr[k]=newr[i];

        k++;
    }
    else{
fnewr[k]=n-1-newr[i];
k++;
    }
}
for(int i=0;i<n;i++)
{

    res[i]=((fnewr[i]-newl[i])-1)*a[i];
}
int max=res[0];
for(int i=1;i<n;i++)
{

    if(res[i]>max)
    {

        max=res[i];
    }
}
printf("%d",max);
}
