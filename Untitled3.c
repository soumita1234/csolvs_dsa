#include<stdio.h>
#include<conio.h>
int main()
{int a[10[10],b[10][10],add[10][10],m,n,i,j;
printf("Enter the rows and colums of first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of the matrix\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);}
printf("Enter the row and colums of 2nd matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of the 2nd matrix\n");
for(i=o;i<m;I++){
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);}
printf("new added matrix:\n\t");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
add[i][j]=a[i][j]+b[i][j];
printf("%d",add[i][j]);
printf("\n");
}
return0;
}
