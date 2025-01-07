#include <stdio.h>
int sum_digits(int a);
int count_digits(int a);
void rev(a);
int main ()


{
int n,sum ,count ;
printf("Enter number: ");
scanf("%d",&n);
sum=sum_digits(n);
count=count_digits(n);
printf("Sum=%d,total digits=%d\n",sum ,count);
 rev(n);

}
int sum_digits(int a)
{
int i,sum=0;
for(i=0; i<=a; i++){
sum=sum+i;}
return sum;
}
int count_digits(int a)
{
int i, count=0;
for(i=0; i<=a; i++){
count=count+1;}
return count;}
void rev(n)
{
int i;

for(i=n; i>=1; i--)
{
printf("%d",i);
}
printf("0.");}



