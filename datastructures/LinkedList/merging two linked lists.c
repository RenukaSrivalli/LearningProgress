//merging two linked lists
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*head1=NULL;
struct node*head2=NULL;
struct node *temp;
struct node *temp1;
int main()
{
int ch,ele1,ele2;

while(1)
{
    struct node*ptr1=malloc(sizeof(struct node));
struct node*ptr2=malloc(sizeof(struct node));
    printf("1.add1 2.add2 3.merge");
printf("Enter choice");
scanf("%d",&ch);
if(ch==1)
{
printf("Enter data1");
scanf("%d",&ele1);
}
if(ch==2)
{
printf("Enter data2");
scanf("%d",&ele2);
}


switch(ch)
{
case 1:add1(ptr1,ele1);
break;
case 2:add2(ptr2,ele2);
break;
case 3:merge(ptr1);
break;
default:printf("Enter valid one");
}
}
}
void add1(struct node*ptr1,int ele1)
{
if(head1==NULL)
{
ptr1->data=ele1;
ptr1->link=head1;
head1=ptr1;

}
else{
temp=head1;
ptr1->data=ele1;
while(temp->link!=NULL)
{
temp=temp->link;
}

temp->link=ptr1;
ptr1->link=NULL;
printf("node inserted");
printf("%d",head1->data);
}
}
void add2(struct node*ptr2,int ele2)
{
if(head2==NULL)
{
ptr2->data=ele2;
ptr2->link=head2;
head2=ptr2;
}
else
{
temp1=head2;
ptr2->data=ele2;
while(temp1->link!=NULL)
{
temp1=temp1->link;
}
temp1->link=ptr2;
ptr2->link=NULL;

}
}
void merge(struct node*ptr1)
{
struct node*p=head1;
struct node*q=head2;
struct node*renu=head1;
while(p->link!=NULL)
{
    p=p->link;
}
    p->link=q;
while(renu!=NULL)
{
printf("%d",renu->data);
renu=renu->link;

}
    }
