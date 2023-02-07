//Inserting at certain position
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
    int item,choice,pos;
do
{
printf("Enter the item to be inserted");
scanf("%d",&item);
printf("Enter the position where to insert");
scanf("%d",&pos);
posinsert(item,pos);
printf("To continue press 0");
scanf("%d",&choice);
}while(choice==0);
}
void posinsert(int item,int pos)
{
struct node*temp;
struct node *ptr1;
temp=head;
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=item;
if(head==NULL)
{
ptr->link=head;
head=ptr;
}
else
{
for(int i=1;i<pos;i++)
{

ptr1=temp;
temp=temp->link;
}
ptr1->link=ptr;//temp->link=ptr
ptr->link=temp;//ptr->link=temp->link so no need of taking ptr1 and assigning to temp
printf("Node inserted at position");
}

}
