#include<string.h>
int main ()
{
char c[100];
gets(c);
int size=strlen(c);
int i;
for(i=0; i<size; i++)
{
if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o'|| c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U')
c[i]=c[i+1];


}
puts(c);
return 0;
}
