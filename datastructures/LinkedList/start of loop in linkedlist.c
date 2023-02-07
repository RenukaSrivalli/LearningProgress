//Detect start of loop
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*head=NULL;
void startloop();
int main()
{
int ch,ele;
    while(1)
    {
printf("1.add 2.detect");
printf("Enter your choice");
scanf("%d",&ch);
struct node* ptr=(struct node*)malloc(sizeof(struct node));
if(ch==1)
{

printf("Enter element to be inserted");
scanf("%d",&ele);
}
if(head==NULL&&ch==1)
{
ptr->link=head;
head=ptr;
}


switch(ch)
{
case 1:add(ele,ptr);
        break;
    case 2:detect();
            break;
    default:printf("Enter valid choice");
}
}
}
void add(int ele,struct node*ptr)
{
ptr->data=ele;
struct node*temp=head;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=ptr;
ptr->link=NULL;
printf("Node inserted");
}
int detect()
{
struct node*p=head;
struct node*q=head;
if(head==NULL)
{
printf("No data");
}
else
{
while(p!=NULL &&q!=NULL)
{
p=p->link;
q=q->link->link;
if(p==q)
{
printf("Loop exists");
startloop();
}
}
printf("NO LOOP");
}
}
void startloop(struct node*q)//q continues from position
{
struct node*p=head;//p starts from beginning
while(p!=q)
{
p=p->link;
q=q->link;
}
printf("%d",p);
}
