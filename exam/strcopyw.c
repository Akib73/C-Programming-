#include <string.h>
int main()
{
char a[100];
gets (a);
char c[100];
int i;
for(i=0; i<100; i++)
{
if(a[i]!='\0')
{
c[i]=a[i];
}
else{
c[i]=a[i];
break ;
}}
puts(c);
}
