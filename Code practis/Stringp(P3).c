#include<stdio.h>
int main ()
{char c[100];
gets(c);
int i,k,j;
int size= strlen(c);
for(i=0; i<=0; i++){
if (c[i]>='a' && c[i]<='z')
{
printf("%c",c[i]-=32);}
else {
printf("%c",c[i]);}
}
for (i=0; i<size; i++){
if(c[i]==' ' && c[i+1]>='a' && c[i+1]<='z')
{
printf("%c",c[i+1]-=32);}
else {
printf("%c",c[i+1]);}
}
return 0;
}
