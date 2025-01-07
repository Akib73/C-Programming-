#include <stdio.h>
int main ()
{
int num[5];
int value,pos=-1,i ,search;

for(i=0; i<5; i++)
{
    printf("Enter value: ");
scanf("%d",&value);
    ;
}
printf("Search:\n");
scanf("%d",&search);
for(i=0; i<5; i++){
if(value==num[i])
{pos=i;
break;}
}
if(pos==-1)
printf("not found");
else
printf("%d",pos);
return 0;
}
