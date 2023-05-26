#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node*link;
};
struct node *header,*ptr,*temp,*ptr1;
void count1();
void delete_front();
void delete_end();
void delete_any();
void search();
void display();
int main()
{
int choice;
int count=1;
int data_value,a=1;
struct node *new1;
header=(struct node*)malloc(sizeof(struct node));
header->data=NULL;
header->link=NULL;
while(a==1)
{	
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
printf("Do you want to continue? If YES press 1 and 0 for NO==");
scanf("%d",&a);
}
while(count==1)
{
printf("\n 01 count node");
printf("\n 02 delete node at front");
printf("\n 03 delete node at end");
printf("\n 04 delete node at any position");
printf("\n 05 search node");
printf("\n 06 display");
printf("\n enter the choice=");
scanf("%d",&choice);
switch(choice)
{
case 1:count1();
break;
case 2:delete_front();
break;
case 3:delete_end();
break;
case 4:delete_any();
break;
case 5:search();
break;
case 6:display();
break;
}
printf("\n Do you want to continue=");
scanf("%d",&count);
}
return (0);
}
void count1()
{
struct node* temp;
int length=0;
temp=header;
while(temp->link!=NULL)
{
length++;
temp=temp->link;
}
printf("\n Length of linked list=%d",length);
}
void delete_front()
{
if(header->link==NULL)
{
printf("\n Linked is empty=");
}
else
{
ptr=header->link;
header->link=ptr->link;
free(ptr);
printf("\n Node delete from first position");
}
}
void delete_end()
{
if(header->link==NULL)
{
printf("\n Linked is empty");
}
else
{
ptr=header;
while(ptr->link!=NULL)
{
ptr1=ptr;
ptr=ptr->link;
}
ptr1->link=ptr->link;
free(ptr);
printf("\n Node delete from end");
}
}
void delete_any()
{
int key;
if(header->link==NULL)
{
printf("\n linked is empty");
}
else
{
printf("\n Enter the data to be deleted");
scanf("%d",&key);
ptr=header;
while((ptr->link!=NULL)&&(ptr->data!=key))
{
ptr1=ptr;
ptr=ptr->link;
}
if(ptr->data==key)
{
ptr1->link=ptr->link;
free(ptr);
printf("\n Node deleted");
}
else
{
printf("Invalid %d is not found key",key);
}
}
}
void search()
{
int flag=0,num;
printf("\n Enter the data to search=");
scanf("%d",&num);
temp=header;
while(temp!=NULL)
{
if(temp->data==num)
{
flag=1;
printf("\n Search successfull");
}
temp=temp->link;
}
if(flag==0)
{
printf("\n Search is successfull");
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
