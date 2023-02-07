#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,r;
    scanf("%d",&n);
    scanf("%d",&r);
    int a[n];
    int temp[r-1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<r-1;i++)
    {
        temp[i]=a[i];
    }
      for(int i=r-1;i<n;i++)
      {
          a[i+1-r]=a[i];
      }
       for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }printf("\n");
  for(int i=0;i<r-1;i++)
    {
        printf("%d ",temp[i]);
    }
printf("\n");
    for(int i=0;i<r-1;i++)
    {
        a[(n-r)+i+1]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
