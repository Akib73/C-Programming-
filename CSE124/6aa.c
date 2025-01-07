#include <stdio.h>
int main ()
{
char c;
printf("Input a character:\n");
scanf("%c",&c);
if(c>='a' &&  c<='z')
printf("It is a small letter");
else if (c>='A' && c<='Z')
printf("It is a capital letter");
else if(c>='0' && c<='9')
printf("It is a digits");
else
printf("It is a spacial symble");
return 0;
}
