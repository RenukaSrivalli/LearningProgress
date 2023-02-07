#include<stdio.h>
int main()
{
int c;
printf("Enter size of an array\n");
scanf("%d",&c);
int a[c];
printf("Enter elements into array\n");
for(int i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
int max=a[0];
for(int i=1;i<c;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("Maximum element is %d",max);
}
