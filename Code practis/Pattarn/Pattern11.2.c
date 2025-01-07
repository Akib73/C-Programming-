#include<stdio.h>
int main ()
{
int row,col,n;
scanf("%d",&n);
for(row=1; row<=n;  row++){
for (col=1; col<=n-row; col++)
{printf(" ",col);}
for(col=1; col<=row; col++){

printf("%c",64+col);
}printf("\n");}
return 0;
}

