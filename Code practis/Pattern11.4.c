#include <stdio.h>
int main ()
{
    int n,row,col;

    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
    for(col=row; col<n; col++)
    {

    printf(" ", col);}
     for(col=1; col<=row; col++)
    {
    printf("*");
}
  printf("\n");  }



return 0;
}
