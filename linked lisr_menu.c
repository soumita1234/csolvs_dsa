#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node *create(struct node *,int);
void Traverse(struct node *);
void Search(struct node *,int);
struct node *Insertion_list(struct node *,int);
struct node *Delete_list(struct node *,int);
int main()
{
struct node *head=NULL;
int x,n,c,s,key;
do
{
printf("1.Create\n2.Traverse\n3.Search\n4.Insert\n5.Delete\nEnter your choice");
scanf("%d",&x);
switch(x)
{
case 1:printf("Enter the number of node want to create");
scanf("%d",&n);
head=create(head,n);
break;
case 2:Traverse(head);
break;
case 3:printf("Enter the searching element");
scanf("%d",&s);
Search(head,s);
break;
case 4:printf("Enter a value");
scanf("%d",&key);
head=Insertion_list(head,key);
Traverse(head);
break;
case 5:printf("Enter a value");
scanf("%d",&key);
head=Delete_list(head,key);
Traverse(head);
break;
default:printf("Wrong choice");
}
printf("\nDo you want to continue then press 1 otherwisw press any othe number");
scanf("%d",&c);
}while(c==1);
return 0;
}
struct node *create(struct node *head,int num)
{
struct node *newnode,*temp;
int i,item;
if(head!=NULL)
{
printf("Already created");
return(head);
}
for(i=1;i<=num;i++)
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter a value for info part");
scanf("%d",&item);
newnode->info=item;
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
return(head);
}
void Traverse(struct node *head)
{
struct node *loc;
loc=head;
while(loc!=NULL)
{
printf("%d\t",loc->info);
loc=loc->next;
}
}
void Search(struct node *head,int s)
{
struct node *p;
int f=0;
p=head;
while(p!=NULL)
{
if(p->info==s)
{
f++;
break;
}
p=p->next;
}
if(f==1)
printf("Element found");
else
printf("Not found");
}
struct node *Insertion_list(struct node *head,int key)
{struct node *loc,*newnode;
int item;
if(head==NULL)
{
printf("Empty list");
return(head);
}
loc=head;
while(loc!=NULL && loc->info!=key)
{
loc=loc->next;
}
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter a value for info part");
scanf("%d",&item);
newnode->info=item;
if(loc==NULL)
{
newnode->next=head;
head=newnode;
}
else
{
newnode->next=loc->next;
loc->next=newnode;
}
return(head);
}
struct node *Delete_list(struct node *head,int key)
{
struct node *locp,*loc;
if(head==NULL)
{
printf("Empty list");
return(head);
}
loc=head;
while(loc!=NULL && loc->info!=key)
{
locp=loc;
loc=loc->next;
}
if(loc==NULL)
{
printf("Key value is not present");
}
else if(head==loc)
{
head=loc->next;
}
else
{locp->next=loc->next;
}
free(loc);
return(head);
}
