#include <stdio.h>
int main ()
{
int BDT,US$,p;
printf("Enter an integer value (BDT) :\n");
scanf("%d",&BDT);
US$=BDT/77;
p=BDT%77;
printf("US$= %d dollar %dTk",US$,p);
return 0;
}
