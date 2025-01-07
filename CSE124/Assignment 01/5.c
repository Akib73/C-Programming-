#include <stdio.h>
int main ()
{
int a,b,c,s;
float avg;
printf("Enter the value of a:\n");
scanf("%d",&a);
printf("Enter the value of b:\n");
scanf("%d",&b);
printf("Enter the value of c:\n");
scanf("%d",&c);
s=a+b+c;
avg=s/3;
printf("The average value of a,b,c is:%f",avg);
return 0;
}
