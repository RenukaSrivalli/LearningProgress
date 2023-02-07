#include <stdio.h>

int main() {
    // Write C code here
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int t[3][3];
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            t[j][i]=a[i][j];
        }
    }
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][3-j-1]=t[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}
