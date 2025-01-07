#include <stdio.h>
int main ()
{
char c [50]="My name is ";
char b []="Akib Ahamad Imu";
int i=0, j=0, len=0;
while(c[i]!='\0')
{i++;
len++;
}
while(b[j]!='\0')
{
c[len+j]=b[j];
j++;}
printf("%s",c);
return 0;
}
