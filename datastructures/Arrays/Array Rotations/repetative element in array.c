#include <stdio.h>
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
for(int i=0;i<n;i++)
{
for(int k=i+1;k<n;k++)
{
if(a[i]==a[k])
{
printf("%d",a[i]);
}
}
}

}
