#include<stdio.h>
int main ()
{
int n;
int sum=0;
int i;
scanf("%d",&n);
int a[n];
for(i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}
int j;
int flag =0;

for(i=0; i<n; i++){

for (j=2; j<a[i]; j++)
{
if(a[i]%j==1){
sum+=a[i];
 break;}
}


}
printf("Sumition of prime number =%d",sum);
}
