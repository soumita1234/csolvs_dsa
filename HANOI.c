#include<stdio.h>
#include<stdlib.h>
int i=0;
void moves(int,char,char,char);
int main()
{
int num;
printf("Enter the no of disks\n");
scanf("%d",&num);
printf("The sequence of moves involved in the tower of hanoi are:-");
moves(num,'A','C','B');
return 0;
}
void moves(int num,char A,char B,char C)
{
if(num==1)
{
i++;
printf("\nMove disk 1 from peg %c to prg %c",A,B);

return;
}
else{
moves(num-1,A,B,C);
printf("\n move disk %d from peg %c to peg %c",num,A,B);
moves(num-1,B,C,A);
printf("\ncount of moves-%d",i);
}
}
