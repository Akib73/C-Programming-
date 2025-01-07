#include<string.h>
int main ()
{
char c[100];
int i;
gets(c);
int size=0;
for(i=0; i<100; i++)
{

if(c[i]!='\0'){
    size=size+1;

}
else {
    break;
}
}

for(i=size-1; i>=0; i--){
printf("%c",c[i]);
}
return 0;
}
