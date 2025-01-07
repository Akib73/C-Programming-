#include<string.h>
int main ()
{
char c[1000];
printf("Enter characters : ");
gets(c);
int i,flag=0;
char search;
printf("Enter search: ");
scanf("%c",&search);
int size=strlen(c);
for(i=0; i<size; i++){
if(search==c[i])
{
flag=1;
break;}
}
if(flag=0)
{
printf("%c is not found",search);
}
else{
printf("%c is found and its position is %d",search,i);
}
return 0;
}
