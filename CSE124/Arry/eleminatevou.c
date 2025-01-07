#include <string.h>
int main ()
{
char c[50];
char ch[50];
gets (c);
int m,l,i;
int size=strlen(c);
for(i=0; i<size; i++)
{
if(c[i]=='a'|| c[i]=='i' || c[i]=='o' || c[i]=='e'|| c[i]=='u'|| c[i]=='A'|| c[i]=='I' || c[i]=='O' || c[i]=='E'|| c[i]=='U')
{m=i;

}
else{
l=i;
ch[i]=c[l];
}


printf("%c",ch[l]);}
return 0;
}
