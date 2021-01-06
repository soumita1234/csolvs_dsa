#include<stdio.h>
#include<stdlib.h>
#define Max 10
int queue [Max];
int front=-1,rear=-1;
void insert();
int delete_element();
void display();
int main()
{
int option,val;
do
{
printf("\npress\n 1-insert\n 2-delete\n 3-display\n 4-exit\n");
printf("\nEnter your choice\n");
scanf("%d",&option);
switch(option)
{
case 1: insert();
         break;
case 2: val=delete_element();
        if(val!=-1)
        printf("the number deleted is %d",val);
        break;
case 3: display();
        break;
case 4: exit (0);
        break;
default: printf("wrong choice");
}
}
while(option!=4);
return 0;
}
void insert()
{
int num;
printf("enter number\n");
scanf("%d",&num);
if(rear==Max-1)
{
printf("\n overflow");
}
else if(front==-1 && rear==-1)
{
front=0;
rear=0;
}
else
rear++;
queue[rear]=num;
}
int delete_element()
{
int val;
if(front==-1 || front>rear)
{
printf("\nunderflow\n");
return -1;
}
else
{
val=queue[front];
front++;
if(front>rear)
front=-1;
rear=-1;
return val;
}
}
void display()
{
int i;
if(front==-1 || front>rear)
{
printf("\n queue is empty");
}
else
{
for(i=front;i<=rear;i++)
printf("\t%d",queue[i]);
}
}

