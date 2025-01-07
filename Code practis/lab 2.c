#include <stdio.h>
int main ()
{
int n,row ,col,k=0;
printf("Enter number : ");
scanf("%d",&n);
for(row=n; row>=1; row--)
{
for(col=row; col<n; col++)
{printf(" ");}
for(col=1; col<n; col++)
{
k=k+1;
printf("%d",col%2);}
printf("\n");}
return 0;
}
