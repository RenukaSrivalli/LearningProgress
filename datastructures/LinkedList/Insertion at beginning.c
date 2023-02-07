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
beginsert(item);
printf("To continue press 0");
scanf("%d",&choice);
}while(choice==0);
}
void beginsert(int item)
{
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->data=item;
ptr->link=head;
head=ptr;
printf("%d is inserted",ptr->data);
}


