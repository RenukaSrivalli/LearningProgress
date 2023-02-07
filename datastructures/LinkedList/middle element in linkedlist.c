//middle element in linked list
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*head=NULL;
int main()
{
int ele;
int ch;
   while(1)
   {
printf("1.insert 2.searchmid");
printf("Enter your chouce");
scanf("%d",&ch);
struct node*ptr=(struct node*)malloc(sizeof(struct node));
if(ch==1)
{
    printf("Enter the element to be inserted");
    scanf("%d",&ele);
}
if(head==NULL&&ch==1)
{
ptr->link=head;
head=ptr;
}
if(head==NULL &&ch==2)
{
printf("no element");
}
switch(ch)
{
    case 1:insert(ele,ptr,head);
    break;
    case 2:searchmid(head);
    break;
    default:printf("Enter valid chouce");

}
}
}
void insert(int ele,struct node*ptr,struct node*head)
{
ptr->data=ele;
struct node*temp=head;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=ptr;
ptr->link=NULL;
printf("Node inserter at beginning");
}
void searchmid(struct node*head)
{
    struct node*temp1=head;
    struct node*temp2=head;
    int count=1;
    while(temp1!=NULL)
    {
        count++;
        temp1=temp1->link;
    }
    int s=1;
    while(s!=count/2)
    {
        temp2=temp2->link;
        s++;
    }
    printf("%d",temp2->data);
}
