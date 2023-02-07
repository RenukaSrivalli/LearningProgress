#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int p,op;
    int count=1;
    scanf("%d",&p);
    op=p;
    int no_of_opp;
    scanf("%d",&no_of_opp);
    int a[no_of_opp];



    for(int i=0;i<no_of_opp;i++)
    {
        scanf("%d",&a[i]);
           if(p<=a[i])
        {
            printf("-1");
            return 0;
        }
    }

    for(int i=0;i<no_of_opp;)
    {
        if(p>a[i])
        {

            p=p-a[i];

            i++;

        }
        else
        {
       count++;
        p=op;

    }
    }

    printf("%d",count);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

