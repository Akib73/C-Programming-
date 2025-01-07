#include <stdio.h>
int main ()
{
int power;
float base,a=1;
printf("Enter Base:\n");
scanf("%f",&base);
printf("Enter Power:\n");
scanf("%d",&power);
int i;
for(i=1; i<=power; i++){
a=a*base;}
printf("%g^%d=%g",base,power,a);
return 0;
}
