/** Array elements  last to 1st **/
#include <stdio.h>
int main ()
{
int a[10]={0,1,2,3,4,5,6,7,8,9};
int i;
int j=0;
for(i=9; i>0; i--)
printf("%d th elements is %d\n",j++,a[i]);
return 0;
}
