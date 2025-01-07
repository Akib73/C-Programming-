#include <stdio.h>
int main ()
{
int n,i,f=1;
printf("Enter  a number:\n");
scanf("%d",&n);
for(i=1; i<=n; i++){
f=f*i;
}
if(f<=0){
    printf("Math Error");
}
else {
printf("Factorial value of given number is %d",f);}
return 0;
}
