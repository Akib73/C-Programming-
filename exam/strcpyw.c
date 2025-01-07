#include <string.h>
int main()
{
char a[100];
gets (a);
char c[100];
int i;
for(i=0; i<100; i++)
{
c[i]=a[i];}
puts(c);
}
