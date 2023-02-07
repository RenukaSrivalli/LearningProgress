#include<stdio.h>
int main()
{
    int num;
    int max=0;
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int temp[n];
    printf("Enter rotation");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        int res=0;
        for(int j=0;j<num;j++)
        {
            temp[j]=a[j];
        }
        for(int k=num;k<n;k++)
        {
            a[k-num]=a[k];
        }
        for(int l=0;l<num;l++)
        {
            a[(n-num)+l]=temp[l];
        }
        for(int z=0;z<n;z++)
        {
            res=res+z*a[z];
        }
        if(res>max)
        {
            max=res;
        }
    }
    printf("%d",max);
}
