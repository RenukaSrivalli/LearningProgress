//Deletion of a linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*head=NULL;
int main()
{
while(1)
{
int ch,ele;
printf("1.Insert 2.Delete");
printf("Enter a choice");
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
case 1:insert(ele,ptr);
break;
case 2:delete();
break;
default:printf("Invalid choice");
}
}
}
void insert(int ele,struct node*ptr)
{
ptr->data=ele;
struct node*temp=head;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=ptr;
ptr->link=NULL;
printf("Node inseted");

}
void delete()
{
    if(head==NULL)
    {

        printf("No nodes to delete\n");
    }
    else
    {
struct node*renu=head;

while(renu!=NULL)
{

head=head->link;
free(renu);
renu=head;

}

struct node*hi=head;
printf("After deletion\n");
while(hi!=NULL)
{
    printf("%d",hi->data);
    hi=hi->link;
}
printf("Linked list is deleted");
}
}
