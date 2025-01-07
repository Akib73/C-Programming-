#include <string.h>
int main ()
{
char c[3000];
gets(c);
int i,count=0;
for(i=0; i<3000; i++){
if(c[i]!='\0')
count=count+1;
else
    break;
}
printf("size=%d",count);
return 0;
}
