#include<stdio.h>
int main ()
{
float a[100];
int n,i;
printf("Enter the the total number of elements: ");
scanf("%d",&n);
for(i=0; i<n; i++){
printf("Enter element%d: ",i);
scanf("%f",&a[i]);}
for(i=1; i<n; i++){
if(a[0]<a[i])
{
a[0]=a[i];}}
printf(" largest number is%g",a[0]);
return 0;
}
