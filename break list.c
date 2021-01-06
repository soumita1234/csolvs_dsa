#include<stdio.h>
#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node*next;
};
int main()
{
int i,n,x,item,c=0;
struct node*head,*newnode,*loc,*temp;
printf("\nEnter the number of nodes you want to creat:");
scanf("%d",&n);
head=NULL;
for(i=0;i<n;i++)
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter a value for info part%d:-",i);
scanf("%d",&item);
newnode->data=item;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
temp->next=newnode;
}
temp=newnode;
}
printf("\nEnter the position you want to break:");
scanf("%d",&x);
loc=head;
while(x!=c)
{
    loc=loc->next;
    c++;
}
temp=loc;
loc=loc->next;
loc->next=NULL;
loc=head;
for(i=0;i<x;i++)
{
  printf("1st node:-%d\n",loc->data);
  loc=loc->next;
}
loc=temp;
for(i=0;i<n-x;i++)
{
 printf("2nd node:-%d\n",loc->data);
loc=loc->next;
}
return 0;
}


