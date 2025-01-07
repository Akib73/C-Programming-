#include <stdio.h>
int main ()
{
char c[100];
gets(c);
int i;
int size=strlen(c);
for(i=0; i<size; i++);{
if(c[i]=='O' || c=='o'){
printf("0");}
else if(c[i]=='I' || c=='i'){
c[i]=='1';
printf("1");}
else if(c[i]=='A' || c=='a'){
c[i]=='4';
printf("4");}
else if(c[i]=='E' || c=='e'){
c[i]=='3';
printf("3");}
else if(c[i]=='S' || c=='s'){
c[i]=='5';
printf("5");}
else if(c[i]=='T' || c=='t'){
c[i]=='7';
printf("7");}
else {
printf("%c", c[i]);
}}
return 0;
}
