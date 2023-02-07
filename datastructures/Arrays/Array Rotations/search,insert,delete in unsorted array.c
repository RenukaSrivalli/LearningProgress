//unsorted array means the elements are not in ascending/descending order,the elemenrs are in insertion order
//sorted array meaans the elements are in ascending/descending order irrespective of insertion order
#include<stdio.h>
int main()
{
int a[10];
int b;
printf("enter no of elements will you enter\n");
scanf("%d",&b);
printf("Enter elements into array\n");
for(int i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
int c=sizeof(a)/sizeof(a[0]);
for(int i=0;i<b;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
//Searching
int n;
printf("Enter element to search\n");
scanf("%d",&n);
for(int i=0;i<b;i++)
{
    if(a[i]==n)
    {
        printf("found at postion %d\n",i+1);
        break;
    }
    if(i==b-1&&a[i]!=n)
    {
        printf("Element not found");
    }
}
//Insertion
printf("Enter element to be inserted\n");
int h;
scanf("%d",&h);
if(b>=c)
   {
      printf("cannot be inserted\n");
   }
    else{
        a[b]=h;
    }
    if(b<c)
    {
    for(int i=0;i<b+1;i++)
    {

        printf("%d\t",a[i]);
    }
    printf("\n");
    }
    else{
        for(int i=0;i<b;i++)
    {

        printf("%d\t",a[i]);
    }
    printf("\n");
    }
//Deletion
int m;
printf("Enter element to delete\n");
scanf("%d",&m);
if(b<c)
{
for(int i=0;i<b+1;i++)
{

    if(a[i]==m)
    {
        for(int j=i;j<b+1;j++)
        {
        a[j]=a[j+1];
        }
        break;
    }
}
}
else
{
    for(int i=0;i<b+1;i++)
{

    if(a[i]==m)
    {
        for(int j=i;j<b+1;j++)
        {
        a[j]=a[j+1];
        }
        break;
    }
}
}
if(b<c)
{
for(int i=0;i<b;i++)
{

    printf("%d\t",a[i]);
}
printf("\n");
}
else
{
  for(int i=0;i<b-1;i++)
{

    printf("%d\t",a[i]);
}
printf("\n");
}
}
