#include<string.h>
void capital_first_word(char W[100]);
int main ()
{
char c[1000];
gets(c);
 capital_first_word(c);
}
void capital_first_word(char W[100])
{
int i;
int size=strlen(W);
for(i=0; i<=0; i++){
if(W[i]>='a'&& W[i]<='z')
printf("%c",W[i]-=32);
else {
    printf("%c",W[i]);
}}
for(i=0; i<size; i++){
if(W[i]==' ' && W[i+1]>='a' && W[i+1]<='z'){
printf("%c",W[i+1]-=32);}
else{
 printf("%c",W[i+1]);
}}
}
