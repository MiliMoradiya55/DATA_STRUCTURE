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
void inorder(struct node  *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d ",root->key);
inorder(root->right);
}
}
void preorder(struct node  *root)
{
if(root!=NULL)
{
printf("%d ",root->key);
preorder(root->left);
preorder(root->right);
}
}
void postorder(struct node  *root)
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
	
}
int main()
{
struct node *root=NULL;
int c=1,n,ch;
do
{
	printf("Enter element to insert in tree=");
	scanf("%d",&n);
	printf("Press 1 to enter new element\n");
	printf("Press 0 for exit\n");
	printf("Enter 0 or 1=");
	scanf("%d",&c);
	root=insert(root,n);
}while(c!=0);
while(1)
{
	printf("\n1.PREORDER");
	printf("\n2.INORDER");
	printf("\n3.POSTORDER");
	printf("\n4.EXIT");
	printf("\nEnter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : preorder(root);
			break; 
		case 2 : inorder(root);
			break; 
		case 3 : postorder(root);
			break; 
		case 4 : exit(0);
			break;
	}
}
return(0);
}
