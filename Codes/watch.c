#include <stdio.h>
int main ()
{
int s,h,S,m,M;
scanf("%d",s);
h=s/3600;
S=S%3600;
m=3+S/60;
S=20+S%60;
printf("%d:%d:%d",h,m,S);
return 0;
}
