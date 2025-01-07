#include <stdio.h>
int main ()
{
int x,y;
printf("Enter the value of x & y:\n");
scanf("%d%d",&x,&y);
printf("Before interchange the value of x & y:%d,%d\n",x,y);
printf("After interchange the value of x & y: %d,%d",x+y-x,x+y-y);
return 0;
}
