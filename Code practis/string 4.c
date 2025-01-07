#include<stdio.h>
int main ()
{
    char search;
    char N[100];
    gets(N);
    int i,flag=0;
    int size=strlen(N);
    printf("Search: ");
    scanf("%c",&search);
    for(i=0; i<size; i++)
    {
        if(search==N[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%c is not found",search);
    }
    else
    {
        printf("%c is found and its  position is %d",search,i);
    }
    return 0;
}
