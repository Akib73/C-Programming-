#include <stdio.h>
int main ()
{
char c[100];
gets(c);
int i,v=0, n=0, d=0, s=0,k=0;
int size =strlen(c);
for(i=0; i<size; i++){
if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o'|| c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U'){
v=v+1;}
else if (c[i]>='a' && c[i]<='z' || c[i]>='A' && c[i]<='Z'){
n=n+1;}
else if (c[i]>='0' && c[i]<='9'){
d=d+1;}
else {
s=s+1;}}
printf("Vowel=%d,Consonant=%d,Digits=%d,Spacial Symble=%d",v,n,d,s);
return 0;
}
