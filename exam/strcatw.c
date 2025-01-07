#include<string.h>
int main ()
{
char c[100];
char b[100];
gets(c);
gets (b);
int size=strlen(c);
int i,s=1;
for(i=0; i<100; i++){
if(b[i]!='\0')
{
    s=s+1;
c[size+i]=b[i];
}else{
    c[size+i]=b[i];
break;}}
puts(c);
return 0;
}
