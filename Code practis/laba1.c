#include <stdio.h>
int main ()
{
int n,row ,col,k=0;
printf("Enter number : ");
scanf("%d",&n);
for(row=1; row<=n; row++ )
{
for(col=1; col<n-row; col++)
{printf(" ");}
for(col=1; col<=row; col++)
{
k=k+1;
printf("%d",k);}
printf("\n");}
return 0;
}
