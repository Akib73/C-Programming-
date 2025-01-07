#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    if (n & 1)
        printf("It is a odd number its cube is %d",n*n*n);
    else
        printf("It is a even number and its square is %d",n*n);
    return 0;
}
