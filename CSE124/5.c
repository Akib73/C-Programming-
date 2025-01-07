#include <stdio.h>
int main ()
{
char c;
printf("Enter a letter:\n");
scanf("%c",&c);
if(c=='a'|| c=='e' ||   c=='i'||  c=='o'|| c=='u '|| c=='A ' || c=='E'|| c=='I' || c=='O' ||c=='U')
printf("The latter you enter is Vowel");
else
printf("The latter you enter is consonant");
return 0;
}
