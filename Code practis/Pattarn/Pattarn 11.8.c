#include<stdio.h>
int main ()
{
int row,col,n;
scanf("%d",&n);
for(row=n; row>=1;  row--){
for (col=row; col<=n; col++)
{printf(" ",col);}
for(col=1; col<=row; col++){
printf("%d",col);
}printf("\n");}
return 0;
}
