#include<string.h>
int main ()
{char c[100];
gets(c);
int i;
int size= strlen(c);
for(i=0; i<=0; i++){
if (c[i]>='a' && c[i]<='z')
{
c[i]-=32;}
}
for (i=0; i<size; i++){
if(c[i]==' ' && c[i+1]>='a' && c[i+1]<='z')
{
c[i+1]-=32;}
}
puts(c);

return 0;
}
