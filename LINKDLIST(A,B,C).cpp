
#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node*link;
};
struct node *header,*ptr,*temp,*ptr1;
void insert_front();
void insert_end();
void insert_any();
void display();
int main()
{
int choice;
int count=1;
header=(struct node*)malloc(sizeof(struct node));
header->data=NULL;
header->link=NULL;
while(count==1)
{
printf("\n 01 insert node at front");
printf("\n 02 insert node at end");
printf("\n 03 insert node at any position");
printf("\n 04 display");
printf("\n enter the choice=");
scanf("%d",&choice);
switch(choice)
{
case 1:insert_front();
break;
case 2:insert_end();
break;
case 3:insert_any();
break;
break;
case 4:display();
break;
}
printf("\n Do you want to continue=");
scanf("%d",&count);
}
return (0);
}


void insert_front()
{
int data_value;
temp=(struct node*)malloc(sizeof(struct node));
printf("\n Enter the data for node=");
scanf("%d",&data_value);
temp->data=data_value;
temp->link=header->link;
header->link=temp;
}

void insert_end()
{
int data_value;
printf("\n Enter the data for node=");
scanf("%d",&data_value);
temp=(struct node*)malloc(sizeof(struct node));
ptr=header;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
temp->data=data_value;
temp->link=ptr->link;
ptr->link=temp;
}

void insert_any()
{
int key;
int data_value;
printf("Enter the data for node=");
scanf("%d",&data_value);
printf("Enter data of the node after which new is to be inserted");
scanf("%d",&key);
temp=(struct node*)malloc(sizeof(struct node));
ptr=header;
while((ptr->link!=NULL)&&(ptr->data!=key))
{
ptr=ptr->link;
}
if(ptr->data==key)
{
temp->data=data_value;
temp->link=ptr->link;
ptr->link=temp;
}
else
{
printf("\n Value %d no found \n",key);
}
}

void display()
{
struct n;

printf("\n Contacts of the linked list are= \n");
ptr=header;
while(ptr->link!=NULL)
{
ptr=ptr->link;
printf("%d\n",ptr->data);
}
}

