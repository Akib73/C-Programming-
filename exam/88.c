//8. Write a recursive function that will find the average of an integer.
#include <stdio.h>
int sum(int a);
int main (){
int n;
float AVG;
printf("Enter A number: ");
scanf("%d",&n);
 AVG =sum(n);
printf("AVG of %d number is %g",n,AVG);
}
int sum(int a)
{
if(a==1){
return a;
}
return (a+sum(a-1))/(float)a;}

