#include <stdio.h>
int main ()
{
char c[100];
gets(c);
int flag =0;
int size = strlen(c);
char search;
printf("search:");
scanf("%c",&search);
int i;
for(i=0; i<size; i++){
if(search==c[i]){
flag=1;
break;
}
}
if(flag==0){
printf("not founfd");
}
else{
printf("%c is found at index %d",search,i);}}
