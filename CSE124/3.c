#include <stdio.h>
int main ()
{
    float b,e,m,avg;
    printf("Enter the marks of Bangla:\n");
    scanf("%f",&b);
    printf("Enter the marks of English:\n");
    scanf("%f",&e);
    printf("Enter the marks of Math:\n");
    scanf("%f",&m);
    avg=(b+e+m)/(int)3;
    if(avg>=60)
    printf("First Division");
    else if(avg>=50 && avg<=59)
    printf("Second Division");
    else if(avg>=40 && avg<=49)
    printf("Third  Division");
    else if(avg,40)
    printf("Fail");
    else
    return 0;
    }


