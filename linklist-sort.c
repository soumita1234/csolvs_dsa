#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node*next;
}node;
node*creat(int n);
void traverse(node*head);
void sortlist(node*head);
int main()
{
int n=0;
node*head=NULL;
printf("How many nodes you want to creat?::");
scanf("%d",&n);
head=creat(n);
traverse(head);
return 0;
}
node*creat(int n)
{
int i=0;
node*head=NULL;
node*temp=NULL;
node*p=NULL;
for(i=0;i<n;i++)
{
temp=(node*)malloc(sizeof(node));
printf("\nEnter the value of node no %d=",i+1);
scanf("%d",&temp->data);
temp->next=NULL;
if(head==NULL)
{
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
p->next=temp;
}
}
}
void sortlist(node*head)
{
 node*i,*j;
 int temp;
 for(i=head;i->next!=NULL;i=i->next)
 {
     for(j=i->next;j!=NULL;j=j->next)
     {
         if(i->data > j->data)
         {
             temp=i->data;
             i->data=j->data;
             j->data=temp;
         }
     }
 }
 sortlist(head);
 printf("\nThe sortlist is-\n");
 traverse(head);
}
void traverse(node*head)
{
node*p=NULL;
if(head==NULL)
{
printf("\nEmpty list");
}
else
{
p=head;
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
}
