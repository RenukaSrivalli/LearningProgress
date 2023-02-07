#include<stdio.h>
char* isBalanced(char* s) {
    int n=strlen(s);
    char stack[n];
    int top=-1;
    //int a;
   // scanf("%d",&a);


for(int i=0;i<n;i++)
{
    printf("hi");
    if(s[i]=='('||s[i]=='['||s[i]=='{')
    {
     printf("%d",top);
        top++;
        printf("%d",top);
        stack[top]=s[i];

    }
   else if(s[i]==')'||s[i]==']'||s[i]=='}')
    {

        if(s[top]!='('||s[top]!='['||s[top]!='{')
        {
            return "NO";

        }
          if(s[top]=='('||s[top]=='['||s[top]=='{')
        {
            top--;
            printf("%d",top);
            if(top==-1&&i==n-1)
            {
                return "YES";

            }
        }
    }
    }


return 0 ;
}
int main()
{
char s[100];
scanf("%s",s);
printf("%s",isBalanced(s));
}
