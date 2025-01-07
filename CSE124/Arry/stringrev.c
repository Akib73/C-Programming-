#include<stdio.h>
int main ()
{
char c[50]="Akib";
char a[50];
int size =strlen(c);
int i;
int s=size-1;
for(i=s; i>=0; i--){

        printf("%c",c[i]);
}

return 0;
}
