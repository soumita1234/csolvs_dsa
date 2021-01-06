#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*prev;
struct node*next;
};
struct node*creat(struct node*,int);
void display(struct node*);
struct node*delet(struct node*,int);
int main()
{
struct node*head=NULL;
int choice,n,x,num;
do
{
printf("Doubly linked List\n");
printf("***MENU***\n1>>CREAT\n2>>DISPLAY\n3>>DELETE\n4>>EXIT\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\nthe number of nodes you want to creat:-- ");
        scanf("%d",&n);
        head=creat(head,n);
        printf("\nelements in node are:->");
        display(head);
        break;
case 2: display(head);
        break;
case 3: delet(head,n);
        break;
case 4: exit (0);

default: printf("\nwrong choice");
         break;
}
printf("\nDo you want to continue?\nthen press 1 otherwise press any key\n");
scanf("%d",&x);
}
while(x==1);
return 0;
}
struct node*creat(struct node*head,int num)
{
struct node *newnode,*temp;
int i,item;
/*if(head!=NULL)
{
printf("Already created");
return(head);
}
*/
for(i=1;i<=num;i++)
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter a value for info part %d--> ",i);
scanf("%d",&item);
newnode->info=item;
newnode->next=NULL;

if(head==NULL)
{
newnode->prev=NULL;
//newnode->next=NULL;
head=newnode;
temp=head;

}
else
{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
temp->next=NULL;
temp->prev=NULL;
printf("%d->",temp->info);
}
temp=head;
while(temp!=NULL)
{
    printf("%d->",temp->info);
    temp=temp->next;
}
}
void display(struct node*head)
{
struct node *loc;
loc=head;
while(loc!=NULL)
{
printf("%d\t",loc->info);
loc=loc->next;
}
}
struct node*delet(struct node*head,int num)
{
  struct node*temp;
  if(head==NULL)
  {
   printf("\nunderflow");
  }
else if(head->next==NULL)
{
  head=NULL;
  free(head);
  printf("%node deleted\n");
}
else
{
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    printf("\nNode Deleted");
}
}

