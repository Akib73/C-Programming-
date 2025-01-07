#include <string.h>
int main()
{
    int i=0,l=0;
char c[50];
gets(c);
while (c[i]!='\0')
{i++;
l++;}
printf("%d",l);
return 0;
}
