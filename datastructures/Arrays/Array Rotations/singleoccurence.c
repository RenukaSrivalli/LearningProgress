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
result=a[0];
for(int i=1;i<n;i++)
{
    result=result^a[i];
}
printf("%d",result);

}
