#include<stdio.h>
#include<stdlib.h>
struct node
{int item;
struct node*next;
}*top=NULL;
void push(int);
void pop();
void display();
void main()
{
int choice,value;
printf("\n::stack useing linked list::\n");
while(1)
{
printf("\nMENU\n1>>push\n2>>pop\n3>>display\n4>>exit\n");
printf("Enter your choice-");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the value to insert-");
        scanf("%d",&value);
         push(value);
         break;
case 2: pop();
        break;
case 3: display();
        break;
case 4: exit(0);
default: printf("\nWrong choice\n");
}
}
}
void push(int value)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->item=value;
if(top==NULL)
newnode->next=NULL;
else
{
newnode->next=top;
top=newnode;
}
printf("insertion successful\n");
}
void pop()
{
if(top==NULL)
{printf("Stack is empty\n");
}
else
{
struct node*temp=top;
printf("\ndeleted element:%d",temp->item);
top=temp->next;
free(temp);
}
}
void display()
{
if(top==NULL)
{
printf("\nStack is empty\n");
}
else
{
struct node*temp=top;
while(temp->next!=NULL)
{
printf("%d->",temp->item);
temp=temp->next;
}
printf("%d->",temp->item);
}
}
