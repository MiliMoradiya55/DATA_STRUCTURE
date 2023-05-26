#include<stdio.h>
#include<malloc.h>
#include<stdlib.h> 
struct node
{
int key;
struct node *left,*right;
};
struct node *newNode(int item)
{
struct node *temp=(struct node*)malloc(sizeof(struct node)); 
temp->key=item;
temp->left=temp->right=NULL; 
return temp;
}
struct node*insert(struct node *node,int key)
{
if(node==NULL)return newNode(key); 
if(key < node->key)
node->left=insert(node->left,key); 
else if(key > node->key)
node->right=insert(node->right,key); 
return node;
}
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->left); 
printf("%d ",root->key); 
inorder(root->right);
}
}
void preorder(struct node *root)
{
if(root!=NULL)
{
printf("%d ",root->key);
preorder(root->left); 
preorder(root->right);
}
}
void postorder(struct node *root)
{
if(root!=NULL)
{
postorder(root->left); 
postorder(root->right); 
printf("%d ",root->key);
}
}
void search(struct node *root)
{
int a;
printf("Enter the Node to Search : "); 
scanf("%d",&a);
if(root!=NULL)
{
if(a==root->key)
{
printf("Element Found");
}
else if(a<root->key)
{
root=root->left; 
printf("\nElement Found");
}
else if(a>root->key)
{
root=root->right; 
printf("\nElement Found");
}
else
{
printf("Element Not Found");
}
}
}
int main()
{
struct node *root=NULL; int c=1,n,ch;
do
{
printf("Enter Element to Insert in Tree : "); 
scanf("%d",&n);
printf("Press 1 to Enter new Element\n");
 printf("Press 0 for Exit\n");
printf("Enter 0 or 1 : ");
scanf("%d",&c);
root=insert(root,n);
}while(c!=0); while(1)
{
printf("\n[1.] PREORDER");
printf("\n[2.] INORDER");
printf("\n[3.] POSTORDER");
printf("\n[4.] SEARCH");
printf("\n[5.] EXIT"); 
printf("\nEnter your Choice : "); 
scanf("%d",&ch);
switch(ch)
{
case 1 : preorder(root); 
break;
case 2 : inorder(root); 
break;
case 3 : postorder(root);
break;
case 4: search(root); 
break;
case 5 : printf("Thank !!!");
exit(0);
break;
}
}
return(0);
}

