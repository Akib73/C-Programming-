#include <stdio.h>
int main ()
{
int a,b;
printf ("Enter two number");
scanf("%d%d",&a,&b);
int choice;
printf("choice:\t\t\n");
printf("1\t\t add\n");
printf("2\t\t sub\n");
printf("3\t\t mul\n");
printf("4\t\t divide\n");
printf("5\t\t reminder\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("result:%d",a+b);
break;
case 2:
printf("result:%d",a-b);
break;
case 3:
printf("result:%d",a*b);
break;
case 4:
printf("result:%d",a/b);
break;
case 5:
printf("result:%d",a%b);
break;
default:
printf("Unrecognized choice");
}
return 0;
}
