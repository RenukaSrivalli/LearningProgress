//anticlockwise
#include <stdio.h>
int r,c;
void transpose(int r,int c,int a[r][c])
{
     int temp;
    int k;

    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

}
void rotate(int r,int c,int a[r][c])
{

    for(int i=0;i<r;i++)
    {
       int  k=r-1;
       int temp;
        for(int j=0;j<c/2;j++)
        {
             temp=a[j][i];
             a[j][i]=a[k][i];
            a[k][i]=temp;
            k--;
        }
    }
}
int main() {
    // Write C code here

    printf("Enter row size");
    scanf("%d",&r);
     printf("Enter column size");
    scanf("%d",&c);
    int a[r][c];

 for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

transpose(r,c,a);
rotate(r,c,a);
//if 180 degrees
//transpose(r,c,a);
//rotate(r,c,a);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}

