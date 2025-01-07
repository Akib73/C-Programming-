#include<stdio.h>
int main ()
{
int row,col,p=1,n;
printf("Enter Number: ");
scanf("%d",&n);
for(row=1; row<=n; row++)
{
for(col=1; col<=row; col++)
{
printf("%d",p%2);
p++;}
printf("\n");
}

return 0;
}
