#include<string.h>
int main ()
{char c[100];
gets(c);
int i;
int size= strlen(c);
for (i=0; i<size; i++){
if(c[i]>='a' && c[i]<='z')
{
c[i]-=32;}
else if(c[i]>='A' && c[i]<='z')
{
c[i]+=32;}
else if(c[i]>='0' && c[i]<='9')
{
c[i]='#';}
else
{
c[i]='%';}
}
puts(c);

return 0;
}
