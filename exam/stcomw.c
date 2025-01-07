#include<string.h>
int main ()
{
char c[100];
char b[100];
gets(c);
gets(b);
int i,com=0;
while(c[i]!='\0'&& b[i]!='\0'){
if(c[i]!=b[i]){
com=1;
break;}i++;
}
if(com==0 && c[i]=='\0'&&b[i]=='\0')
{
com=0;
}
printf("Result:%d",com);
}
