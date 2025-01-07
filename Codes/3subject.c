#include <stdio.h>
int main ()
{
    double a,b,c,s;
    printf("Enter marks of 3subje:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/3;
    if(s>=60)
    {
        printf("first");
    }
    else if(s>=50 &&s<=59)
    {
        printf("second");
    }
    else if (s>=40 && s<=49)
    {
        printf("third");
    }
    else if (s<40)
    {
        printf("Faill");
    }
    else
        return 0;
}
