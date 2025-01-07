#include <stdio.h>
int main ()
{
char c;
printf("Enter a charecter :\n");
scanf("%c",&c);
if (c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u'||c=='A'|| c=='E'|| c=='I'||c=='O'||c=='U')
{printf("vowel");
}
else{printf("Consonent");
}
return 0;
}
