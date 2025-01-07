#include<stdio.h>
int main ()
{
char c[50]="Akib";
char copy[]="Akib Imu";
int d = strcmp(c,copy);
if(d==0)
printf("strings are equal");
else
printf("string are not equal");
return 0;
}
