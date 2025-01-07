#include <stdio.h>
int main ()
{
char c[100];
gets(c);
int i,v=0, n=0, d=0, s=0,k=0;
int size =strlen(c);
for(i=0; i<size; i++){
if(c[i]>=97 && c[i]<=123){
printf("%c",c[i]-=32);}
else if (c[i]>=65 && c[i]<=91){
printf("%c",c[i]+=32);}
else if (c[i]>='0' && c[i]<='9'){
printf("#");}
else if(c[i]==' ') {
printf(" ");}
else {
printf("%%");}}
return 0;
}
