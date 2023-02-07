#include<stdio.h>
int main()
{
int size;
int flag=1;
scanf("%d",&size);
int a[size][size];
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<size-1;i++)
{
for(int j=0;j<size;j++)
{
    if(i+1==size)
    {


        if(a[i][j]!=a[0][j+1])
        {
            flag=0;
            break;
        }
    }
    else if(j+1==size)
    {
         if(a[i][j]!=a[i+1][0])
        {
            flag=0;
            break;
        }

    }
else if(a[i][j]!=a[i+1][j+1])
{

    flag=0;
    break;
}
}
}
if(flag==1)
{
    printf("circular rotations of each other");
}
else
{
    printf("Not circular rotations of each other");
}
}
