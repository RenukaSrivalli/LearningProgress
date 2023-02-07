#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int no,r,i;
    scanf("%d",&no);
    int n1[no];
for(int i=0;i<no;i++)
{
    scanf("%d",&n1[i]);
}
   if(no==1)
   {
       printf("yes");
   }
   r=n1[0];
    for(i=1;i<no;i++)
    {
        if(n1[i]>r)
        {
            r=n1[i];
        }
       else if(n1[i]==r)
        {
            r=n1[i];
            if(n1[i+1]>r)
            {
                printf("No");
                break;
            }
        }
        else if(n1[i]<r)
        {
            r=n1[i];
            if(i<no)
            {
            if(n1[i+1]>r||n1[i+1]==r)
            {
                printf("No");
                break;
            }
            }
        }

    }
   if(i==no&&no!=1)
   {
       printf("Yes");
   }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
