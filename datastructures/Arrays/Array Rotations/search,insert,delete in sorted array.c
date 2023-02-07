#include<stdio.h>
int main()
{
int n,c,s;
printf("Enter size of an array\n");
scanf("%d",&c);
int a[c];
printf("no of elements do you want to insert\n");
scanf("%d",&n);
printf("Enter elements into array(in ascending or dexcending order)\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to search\n");
scanf("%d",&s);
int low=0;
int high=n-1;
int mid;
while(low<=high)
{
mid=(low+high)/2;
if(s<a[mid])
{
high=mid-1;
}
else if(s>a[mid])
{
low=mid+1;
}
else if(s==a[mid])
{
printf("Element found at postion %d",mid+1);
break;
}
}
if(mid==n-1&&s>a[mid]){
    printf("Element not found");
}
//Insertion
int h;
printf("Enter the element to be inserted\n");
scanf("%d",&h);
if(n>=c)
{
    printf("cannot be inserted");
}
else
{
    a[n]=h;
}
printf("After Insertion\n");
if(n<c)
{
for(int i=0;i<n+1;i++)
{
    printf("%d",a[i]);
}
}
else{
   for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}
}
//Deletion
int d;
printf("Enter the element to be deleted");
scanf("%d",&d);
if(b<c)
{
for(int i=0;i<n+1;i++)
{
    if(a[i]==d)
    {

        a[i]=a[i+1];
        break;
    }
}
}
else{
    for(int i=0;i<n;i++)
{
    if(a[i]==d)
    {

        a[i]=a[i+1];
    }
}
}
printf("after deletion");
}

