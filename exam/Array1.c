#include<stdio.h>
int main ()
{
int n;
scanf("%d",&n);
float a[n];
int i;
for(i=0; i<n; i++)
{
printf("Enter %d elements : ",i);
scanf("%f",&a[i]);
}
float max =a[0];
for(i=1; i<n; i++)
{
if(a[i]>max)
{
max=a[i];
}}
printf("max=%g",max);
}
