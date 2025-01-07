#include <stdio.h>
int main ()
{
float BDT,US$,p;

printf("Enter an integer value (BDT) :\n");
scanf("%f",&BDT);
US$=BDT/77.5;
p=BDT- (int)(BDT/77.5)*77.5;
printf("US$= %d dollar %gTk",(int)US$,p);
return 0;
}
