#include<stdio.h>
int main ()
{
    int i;
    char c[100];
    char b[100];
    gets(c);
    int size=strlen(c);
    for(i=size-1; i>=0; i--)
    {
        printf("%c",c[i]);
    }
    return 0;
}
