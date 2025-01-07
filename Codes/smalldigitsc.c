//**6. WAP to input a character and check that it’s a small letter, capital letter,
//a digit or a special symbol
#include <stdio.h>
int main ()
{
    char c;
    printf("Enter a charecter :\n");
    scanf("%c",&c);
    if(c>='A'&& c<='Z')
    {
        printf("capital letter");
    }
    else if(c>='a'&&c<='z')
    {
        printf("small letter");
    }
    else if(c>='0' && c<='9')
    {
        printf("digit");
    }
    else
    {
        printf("special symbol");
    }
    return 0;
}
