#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of square matrix");
scanf("%d %d",&m,&n);
int top=0;
int left=0;
int right=n-1;
int down=m-1;
int dir=0;
int arr[m][n];
printf("Enter elements");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",&arr[i][j]);
}
printf("\n");
}
while(right>=left && down>=top){
if(dir==0){
for(int i=left;i<=right;i++)
{
printf("%d",arr[top][i]);
}
top++;
}

if(dir==1)
{
for(int i=top;i<=down;i++)
{
printf("%d",arr[i][right]);
}
right--;
}
if(dir==2)
{
for(int i=right;i>=left;i--)
{
printf("%d",arr[down][i]);
}
down--;
}
if(dir==3)
{
for(int i=down;i>=top;i--)
{
printf("%d",arr[i][left]);
}
left++;
}
dir=(dir+1)%4;
}
}
