#include <stdio.h>
int main ()
{
int row ,col,n,k=0;
printf("Enter Number: ");
scanf("%d",&n);
for(row=1; row<=n; row++)
{
for(col=1; col<=row; col++)
{
k=k+1;
printf("%d ",k);}
printf("\n");
}
return 0;
}
