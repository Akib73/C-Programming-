#include <stdio.h>
int main()
{
char c[100];
gets (c);
int i,w=0,l=0;
int size =strlen(c);
for(i=0; i<size; i++)
{
if(c[i]==' ')
{
w=w+1;}}
for(i=0; i<size; i++)
if(c[i]!=' ')
{l=l+1;}
    printf("Word=%d,Charecter:%d",w+1,l);
return 0;
}
