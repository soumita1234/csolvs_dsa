#include<stdio.h>
#include<stdlib.h>
struct node{
    int co,expo;
    struct node*next;
};
struct node*head=NULL;
struct node*creat(struct node*head);
void display(struct node*head);
int main()
{
   head=creat(head);
   display(head);

}
struct node*creat(struct node*head)
{
int n,i;
struct node*p1,*p2;
printf("Enter the no of polynomial\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
p1=(struct node*)malloc(sizeof(struct node));
printf("Enter the cofficient and exponant value of %d-",i);
scanf("%d",&p1->co);
scanf("%d",&p2->expo);
p1->next=NULL;
if(head==NULL)
{
head=p1;
}
else
{
p2->next=p1;
}
p2=p1;
}
return head;
}
void display(struct node*head)
{
 struct node*loc;
 loc=head;
 while(loc!=head)
 {
     printf("%dx^%d\t",loc->co,loc->expo);
     loc=loc->next;
 }

}
