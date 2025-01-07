//7. WAP to find out the largest among three numbers
#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Input three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b || a>c)
    {
        printf("%d",a);
    }
    else if (b>a || b>c)
    {
        printf("%d",b);
    }
    else if(c>a || c>b)
{
        printf("%d", c);
    }
        else
            return 0;
    }
