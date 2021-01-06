#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node*creat(struct node*,int);
void Traverse(struct node*);
struct node*reverse(struct node*);
struct node*traverse_reverse(struct node*);
int main()
{
struct node*head=NULL;
int x,n,c;
do
{
printf("press\n 1>>creat\n 2>>traverse\n 3>>reverse\n4>>traverse_reverse");
scanf("%d",&x);
switch(x)
{
case 1: printf("Enter the no of nodes you want to creat\n");
        scanf("%d",&n);
        head=creat(head,n);
        break;
 case 2: Traverse(head);
         break;
 case 3: head=reverse(head);
         Traverse(head);
         break;
 case 4: traverse_reverse(head);
         break;
 default: printf("Wrong choice");
 }
 printf("\n do you want to continue? press 1");
 scanf("%d",&c);
 }
 while(c==1);
 }
 struct node*creat(struct node*head,int num)
 {
 struct node*newnode,*temp;
 int i,item;
 if(head!=NULL)
 {
 printf("already created\n");
 return(head);
 }
 for(i=1;i<=num;i++)
 {
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter a value for info part %d-",i);
 scanf("%d",&item);
 newnode->info=item;
 newnode->next=NULL;
 if(head==NULL)
 {head=newnode;
 }
 else
 {
 temp->next=newnode;
 }
 temp=newnode;
 }
 return(head);
 }
 struct node *reverse(struct node *head)
 {
  struct node*loc,*locn,*locp;
  if(head==NULL)
  {
    printf("Empty list\n");
    return(head);
  }
  loc=head;
  locn=loc->next;
  locp=NULL;
  loc->next=NULL;
  while(locn!=NULL)
  {
    locp=loc;
    loc=locn;
    locn=loc->next;
    loc->next=locp;
  }
  head=loc;
  return(head);
  }
void Traverse(struct node*head)
{
   struct node*loc;
    loc=head;
    while(loc!=NULL)
    {
        printf("%d\t",loc->info);
        loc=loc->next;
    }

}
struct node*traverse_reverse(struct node*head)
{
    if(head==NULL)
    {
        printf("\nEmpty List\n");
        return (0);
    }
    if(head->next!=NULL)
    {
        traverse_reverse(head->next);
    }
    printf("%d\n",head->info);
}
