#include<stdio.h>
int main()
{
    int r1,c1;
    scanf("%d %d",&r1,&c1);
        int m1[r1][c1],m2[r2][c2];

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
     scanf("%d %d",&r2,&c2);

     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    int sum[r1][c2];
    if(c1!=r2)
    {
         printf("-1");
    }
    else
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                sum[i][j]=0;
                for(int k=0;k<r2;k++)
                {
                    sum[i][j]=sum[i][j]+m1[i][k]*m2[k][j];
                }
            }
        }

    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
	//your code here
	return 0;
}
