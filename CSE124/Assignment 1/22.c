#include <stdio.h>
int main ()
{
int a,b,c;
printf("Input two digits number:\n ");
scanf("%d",&a);
b=a/10;
c=a%10;
printf("Reverse number:%d%d",c,b);
return 0;
}
