#include <string.h>
int main ()
{
char c[100];
gets(c);
int size=strlen (c);
puts(c);
printf("%d",size);
return 0;
}
