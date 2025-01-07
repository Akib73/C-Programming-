#include<stdio.h>
int main ()
{
int row,col,n;
scanf("%d",&n);
for(row=n; row>=1;  row--){
for (col=row; col<=n; col++){
printf(" ");}
for(col=1; col<=row; col++){
printf("*");
}printf("\n");}
return 0;
}

