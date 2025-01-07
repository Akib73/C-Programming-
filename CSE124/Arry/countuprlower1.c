#include <stdio.h>
int main ()
{
char c[50];
gets(c);
int i,l=0,m=0,p=0,k=0;
int size=strlen(c);
for(i=0; i<size; i++)
{
if(c[i]>='a' && c[i]<='z'){
m=m+1;}
else if (c[i]==' ')
{
    p=p+1;
}
else if (c[i]>='A' && c[i]<='Z'){
    l=l+1;}
else
{
    k=k+1;
}
}
printf("Small later:%d,Capital leter:%d",m,l);
return 0;
}
