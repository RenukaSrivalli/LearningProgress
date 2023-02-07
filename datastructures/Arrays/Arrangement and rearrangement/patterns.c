#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,k,j;
    scanf("%d",&n);

    for(i=1;i<n-1;i++)
    {
        for(k=1;k<i;k++)
    {
        printf(" ");
    }
         printf("%d",i);
        for(j=i+1;j<=n-i;j++)
        {
            printf(" ");
        }
        if(i!=n-i+1)
        {
          printf("%d",n-i+1);
        }

        if(i==n-i+1)
        {
          break;
        }
        printf("\n");


    }
}
