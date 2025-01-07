#include <stdio.h>
int fact (int *n);
int main ()
{
int n;
int f;
scanf("%d",&n);

f=fact(&n);
printf("%d", f);}
int fact (int*n){

if (n==1)
{return 1;}
return *n*fact (*n-1);
}
