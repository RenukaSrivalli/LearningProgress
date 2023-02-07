#include<stdio.h>
#include<stdbool.h>
char *fun(int *,const int *);
int main()
{
    char res,n;
int a[]={1,1,1,3,3,4,3,2,4,2};
 n=sizeof(a)/sizeof(a[0]);
res=fun(n,a);
printf("%s",res);
}
char *fun(int *n,const int *a)
{
    int count;
for(int i=0;i<n;i++)
{
    count=1;
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            count++;
            if(count==2)
            {
                return "true";
            }
        }
        if(i==n-2&&a[i]!=a[j])
            {
               return "false";
            }
    }


}
}

