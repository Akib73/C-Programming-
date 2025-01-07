#include <string.h>
int main ()
{
char c[100];
char a[100];
gets (c);
gets (a);
strcat(c,a);
puts(c);
return 0;
}
