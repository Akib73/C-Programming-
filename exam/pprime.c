#include <stdio.h>
int prime (int a[10]);
int main ()
{
int n;
scanf("%d",&n);
int a[n];
int i;
for(i=0; i<n; i++){
scanf("%d",&a[i]);
}
int sum=0;
sum=prime(a[n]);
printf("%d",sum);}
int prime (int a[10])
{
int i,j;
int sum=0;
for(i=0; i<10; i++){
for(j=2; j<a[10]; j++){
if(a[i]%j){
sum+=a[i];
}}}
return sum;}
