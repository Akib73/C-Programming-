#include <stdio.h>
int main ()
{
char c[100];
char b[100];
gets (c);
gets (b);
int s = strcmp(c,b);
printf("%d",s);
return 0;
}
