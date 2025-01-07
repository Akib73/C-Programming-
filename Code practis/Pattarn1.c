#include <stdio.h>
int main ()
{
    int n,row,col;
    char k=64;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        k=k+1;


    for(col=1; col<=row; col++)
    {

    printf("%c ", k);
    }
    printf("\n");
    }

return 0;
}
