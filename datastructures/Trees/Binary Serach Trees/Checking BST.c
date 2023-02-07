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
int isBST(struct node *root)
{
   static struct node*prev=NULL;
if(root!=NULL)
{
if(!isBST(root->left))
{

    return 0;
}
if(prev!=NULL &&root->data<=prev->data)
{
    return 0;
}
prev=root;
return isBST(root->right);
}


else{
    return 1;
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
struct node *p=createNode(5);
struct node *p1=createNode(3);
struct node *p2=createNode(6);
struct node *p3=createNode(1);
struct node *p4=createNode(4);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
InOrder(p);
printf("\n");
printf("%d",isBST(p));
}
