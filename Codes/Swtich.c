#include <stdio.h.>
int main ()
{
    int a,b;
    char c;
    printf("Enter any one operator +, -, *,/,%:\n");
    scanf("%c",&c);
    printf("Enter tow number:\n");
    scanf("%d%d",&a,&b);
    switch (c)
    {
    case'+':
        printf("The addition of tow numbers is %d",a+b);
        break;
    case'-':
        printf("The subtraction  of tow numbers is %d",a-b);
        break;
    case'*':
        printf("The multiplication of tow numbers is %d",a*b);
        break;
    case'/':
        printf("The division of tow numbers is %d",a/b);
        break;
    case'%':
        printf("The remainder of tow numbers is %d,a%b");
        break;
default:
        printf("Math Error");
    }
    return 0;
}
