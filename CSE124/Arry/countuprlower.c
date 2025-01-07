#include <string.h>
int main ()
{
char c[50];
gets(c);
int i,l=0,m=0;
int size=strlen(c);
for(i=0; i<size; i++){
if(c[i]+32==c[i]-32)
l=l+1;
else
m=m+1;
}
printf("Upper case=%d, lowercase=%d",l,m);
return 0;
}
