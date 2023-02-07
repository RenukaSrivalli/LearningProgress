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
    int item,choice;
do
{
printf("Enter the item to be inserted");
scanf("%d",&item);
endinsert(item);
printf("To continue press 0");
scanf("%d",&choice);
}while(choice==0);
}
void endinsert(int item)
{
    struct node*temp;
    temp=head;
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->data=item;
if(head==NULL)
{
ptr->link=NULL;
head=ptr;
printf("Node inserted");
}
else
{
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=ptr;
ptr->link=NULL;
printf("Node Inserted continuosly");
}
}


