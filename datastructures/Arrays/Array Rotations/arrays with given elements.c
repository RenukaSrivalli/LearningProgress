#include<stdio.h>
int main()
{
int a[]={1,2,3,4};
int c=sizeof(a)/sizeof(a[0]);
printf("%d",c);
}
