#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
};
struct node*head=NULL;

int main()
{
    int ch,ele;
    while(1)
    {
printf("1.add 2.traverse");
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
if(head==NULL &&ch==2)
{
printf("cannot traverse");
}
switch(ch)
{
case 1:add(ele,ptr,head);
        break;
    case 2:traverse(head);
            break;
    default:printf("Enter valid choice");
}
}
}
void add(int ele,struct node*ptr,struct node*head)
{
ptr->data=ele;
struct node*temp=head;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=ptr;
ptr->link=NULL;
}
void traverse(struct node*head)
{
    struct node*temp1;
temp1=head;
while(temp1!=NULL)
{

printf("%d",temp1->data);
temp1=temp1->link;
}
}
