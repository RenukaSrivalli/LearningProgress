#include<stdio.h>
int main()
{
int n,result;
printf("Enter array size");
scanf("%d",&n);
int a[n];
printf("Enter elements into array\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int j=0;j<n;j++)
{
for(int k=0;k<n;k++)
{
if(j!=k)
{
if(a[j]==a[k])
{
    break;
}
if(a[j]!=a[k]&&k==n-1){
   printf("%d",a[j]);
}
}
if(j==n-1)
{
    if(a[j]==a[k])
    {
        printf("%d",a[j]);
    }
}
}
}

}
