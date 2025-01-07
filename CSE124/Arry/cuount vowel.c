#include <string.h>
int main ()
{
char c[100];
printf("Enter  character:\n");
gets(c);
int i,m=0,l=0,n;
int size=strlen(c);
for(i=0; i<size; i++){
if(c[i]=='a'|| c[i]=='i' || c[i]=='o' || c[i]=='e'|| c[i]=='u'|| c[i]=='A'|| c[i]=='I' || c[i]=='O' || c[i]=='E'|| c[i]=='U')
{m=m+1;}
else if(c[i]==' ') {
    n=1;}
else {
l=l+1;}
}
printf("v=%d,c=%d",m,l);
return 0;
}
