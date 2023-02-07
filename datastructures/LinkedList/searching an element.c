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
int ch,ele,sea;
    while(1)
    {
printf("1.add 2.search");
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
if(ch==2)
{
printf("Enter the element to search");
scanf("%d",&sea);
}
switch(ch)
{
case 1:add(ele,ptr);
        break;
    case 2:search(sea);
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
void search(int sea)
{
int count=1;
struct node*renu=head;
while(renu->data!=sea)
{
count++;
renu=renu->link;
}
printf("Element found at position %d",count);
}
