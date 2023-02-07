#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1;
int ch;
int count=0;
void enque(int val)
{
push1(val);
count++;
}
void deque()
{
int i,a,b;
if(top1==-1)
{
    printf("Queue is empty\n");}
else
{
    for(i=0;i<count;i++)
    {
        a=pop1();
        push2(a);
    }
    b=pop2();
    printf("popped element is %d\n",b);
    count--;
    for(i=0;i<count;i++)
    {
        push1(pop2());
    }
}
}
void push1(int val)
{
    if(top1==N-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top1++;
        s1[top1]=val;
    }
}
int pop1()
{
 return s1[top1--];

}
int pop2()
{
    return s2[top2--];
}
void push2(int val)
{
    if(top2==N-1)
    {
        printf("Overflow");}
    else
    {
        top2++;
        s2[top2]=val;
    }
}
void display()
{
    if(top1==-1)
    {

        printf("No elements\n");
    }
    else{
        int i;
        printf("The elements are:");
        for(i=0;i<=top1;i++)
        {

            printf("%d\t",s1[i]);
        }
    }

}
int main()
{
int val;
while(1){
printf("\n 1:Enqueue\t 2:Dequeue\t 3:display \t 4:Break the process\n Enter choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter val : ");
scanf("%d",&val);
enque(val);
break;
case 2:deque();
break;
case 3:display();
break;
case 4:exit(0);
}
}
}
