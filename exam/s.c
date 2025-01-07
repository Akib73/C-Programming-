#include <stdio.h>
int fact (int *n);
int main ()
{
int n;
int f;
scanf("%d",&n);

f=fact(&n);
printf("%d", fact(&n));}
int fact (int*n){

if (*n==1)
{return *n;}
return *n* fact(*n-1);
}
