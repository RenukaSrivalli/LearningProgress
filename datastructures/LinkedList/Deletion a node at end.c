//Deletion at end
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
case 2:deleteEnd();
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
void deleteEnd()
{
    if(head==NULL)
    {

        printf("No nodes to delete\n");
    }
struct node*renu=head;
struct node*renu1=head;
while(renu->link!=NULL)
{
    renu1=renu;
renu=renu->link;
}
renu1->link=NULL;
free(renu);

struct node*hi=head;
printf("After deletion\n");
while(hi!=NULL)
{
    printf("%d",hi->data);
    hi=hi->link;
}
}
