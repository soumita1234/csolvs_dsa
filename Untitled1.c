#include<stdio.h>
#include<conio.h>
#define max 10;
#int queue[max];
#void queue_empty();
#void queue_full();
#void enqueue();
#int dequeue();
#void display();
#void main()
{
int front=-1,rear=-1;
int item,choice;
int n=0;
while(n=1)
{
printf("***MENU***\n1>>initialise\n2>>deletion\n3>>display\n4>>exit\nEnter your choice--> ");
scanf("%d",&choice);
switch(choice)
{
case 1: enqueue();
        break;
case 2: dequeue();
        break;
case 3: display();
        break;
case 4: exit 0;
default: printf("\n oppos !!wrong choice");
         break:
}
printf("\nDo you want to continue? tnen press 1 otherwise press any key\n");
scanf("%d",&n);
}
}
void queue_empty()
{
if(front=-1&&rear=-1)
{
printf("queue is empty\n");
}
else
return 0;
}
void queue_full()
{
if(front==0&&rear=max-1 || front==rear+1)
{
printf("\nQueue is full\n");
}
else
{
return o;
}
}
void enqueue(int item)
{ if (queue_full());
  {printf("overflow\n");
  }
}
