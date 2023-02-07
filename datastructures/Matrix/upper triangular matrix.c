//upper triangular matrix
#include<stdio.h>
int main()
{
int size;
printf("Enter size of matrix");
scanf("%d",&size);
int a[size][size];
printf("enter elements");
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
if(j<i)//column position lesser than row position the print 0
{
a[i][j]=0;
}
}
}
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

}
