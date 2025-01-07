#include <stdio.h>
int main ()
{int a,b;
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %g\n",a,b,a/ (float)b);
    printf("%d %% %d =%d\n",a,b,a%b);
    return 0;
}
