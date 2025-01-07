#include<stdio.h>
int sum();
int main ()
{
printf("Sum of x and y is %d",sum());
}
int sum()
{
int x,y;
printf("Enter x,y value");
scanf("%d%d",&x,&y);
return x+y;}
