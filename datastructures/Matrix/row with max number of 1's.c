#include<stdio.h>
int main()
{
int n;
printf("Enter size");
scanf("%d",&n);
int a[n][n];
int maxcount=0;
int count=0;
int rowindex;
printf("Enter elements");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<n;i++)
{
count=0;
for(int j=0;j<n;j++)
{
if(a[i][j]==1)
{
count++;
if(count>maxcount)
{
maxcount=count;
rowindex=i;
}
}
}
}
printf("The row with maximum number of 1's are %d",rowindex);
}
