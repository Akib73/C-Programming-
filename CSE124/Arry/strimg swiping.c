#include <string.h>
int main ()
{
char s1[50];
char s2[50];
char tem[50];
gets(s1);
gets(s2);
strcpy(tem,s1);
strcpy(s1,s2);
strcpy(s2,tem);
printf("string1=%s\n",s1);
printf("string2=%s",s2);
return 0;
}
