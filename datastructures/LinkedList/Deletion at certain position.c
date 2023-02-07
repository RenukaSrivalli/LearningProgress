//Deletion at certain position
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
int ch,ele,pos;
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
if(ch==2&&head==NULL)
{
printf("NO nodes to delete");
}
if(ch==2&&head->link==NULL)
{
printf("Only one node is their");
}
if(ch==2&&head!=NULL&&head->link!=NULL)
{
printf("Enter the position to be deleted");
scanf("%d",&pos);
}
switch(ch)
{
case 1:insert(ele,ptr);
break;
case 2:deletePos(pos);
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
void deletePos(int pos)
{
  int count=1;
struct node*renu=head;
struct node*renu1=head;
if(pos==1)
{
    head=head->link;
    free(renu);
}
else{
while(count!=pos)
{
    count++;
    renu1=renu;
renu=renu->link;
}
renu1->link=renu->link;
free(renu);
}

struct node*hi=head;
printf("After deletion\n");
while(hi!=NULL)
{
    printf("%d",hi->data);
    hi=hi->link;
}
}
