//palindrome
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*head=NULL;
struct node *renu;
char *rev(struct node*);
int main()
{
int ch,ele;
    while(1)
    {
printf("1.add 2.pal");
printf("Enter your choice");
scanf("%d",&ch);
struct node* ptr=(struct node*)malloc(sizeof(struct node));
if(ch==1)
{

printf("Enter element to be inserted");
scanf("%d",&ele);
}
switch(ch)
{
case 1:add(ele,ptr,ch);
        break;
    case 2:pal(ch);
            break;
    default:printf("Enter valid choice");
}
}
}
void add(int ele,struct node*ptr,int ch)
{
    ptr->data=ele;
    if(head==NULL&&ch==1)
{
ptr->link=head;
head=ptr;
}
else{

struct node*temp=head;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=ptr;
ptr->link=NULL;
printf("Node inserted");
}
}
void pal(int ch)
{
    if(head==NULL&&ch==2)
{
printf("No data");
}
else if(head->link==NULL&&ch==2)
{
printf("only one data");
}
else
{
struct node*p=head;
struct node*q=head;
struct node*startsec;
while(1)
{
q=q->link->link;
if(q->link==NULL)
{

startsec=p->link->link;
break;
}
if(q==NULL)
{
startsec=p->link;
break;
}
p=p->link;
}
p->link=NULL;
char *str=rev(startsec);
printf("%s",str);
}
}
char *rev(struct node*startsec)
{
struct node*prevnode=NULL;
struct node*currentnode=startsec;
struct node*nextnode=startsec;
while(nextnode!=NULL)
{
nextnode=nextnode->link;
currentnode->link=prevnode;
prevnode=currentnode;
currentnode=nextnode;
}
startsec=prevnode;
while(head->data==startsec->data&&head->link!=NULL&&startsec->link!=NULL)
{
head=head->link;
startsec=startsec->link;
}
if(head->data!=startsec->data)
{
return "Not a palindrome";
}
if(head->data==startsec->data&&head->link==NULL&&startsec->link==NULL)
{
return "palindrome";
}


}

