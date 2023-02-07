#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
void InOrder(struct node *root)
{
if(root!=NULL)
{
InOrder(root->left);
printf("%d",root->data);
InOrder(root->right);

}
}
struct node *createNode(int val)
{
struct node *new=(struct node*)malloc(sizeof(struct node));
new->data=val;
new->left=NULL;
new->right=NULL;
return new;
}
int main()
{
struct node *p=createNode(4);
struct node *p1=createNode(1);
struct node *p2=createNode(6);
struct node *p3=createNode(5);
struct node *p4=createNode(2);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
InOrder(p);
}
