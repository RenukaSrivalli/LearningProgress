//reverse of a linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*head=NULL;
struct node *renu;
int main()
{
int ch,ele;
    while(1)
    {
printf("1.add 2.revese");
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
    case 2:reverse();
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
void reverse()
{
if(head==NULL)
{
printf("No data to reverse");
}
else
{
struct node*prevnode;
struct node *currentnode;
struct node *nextnode;
prevnode=NULL;
currentnode=nextnode=head;
while(nextnode!=NULL)
{
nextnode=nextnode->link;
currentnode->link=prevnode;
prevnode=currentnode;
currentnode=nextnode;
}
head=prevnode;
renu=head;

while(renu!=NULL)
{
printf("%d",renu->data);
renu=renu->link;
}
}
}
