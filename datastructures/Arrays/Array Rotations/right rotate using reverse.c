#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,r;int a[n];
    int temp1[n];
    scanf("%d",&n);
    scanf("%d",&r);
    for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
     for(int i=r-2;i>=0;i--)
    {
        temp1[n-r-i-1]=a[i];
    }
     for(int i=0;i<=r-2;i++)
    {
printf("%d",temp1[i]);
    }
    for(int i=n-1;i>=r-1;i--)
    {
        temp1[n-i+1]=a[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",temp1[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
