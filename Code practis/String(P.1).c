#include <string.h>
int main ()
{
char c[1000];
printf("Enter Charecter: ");
gets(c);
int i,w=0,l=0;
int size=strlen(c);
for(i=0; i<size; i++){
if(c[i]==' '){
w=w+1;}}
l=size;
printf("Total word=%d\n total character=%d",w+1,l);
return 0;
}
