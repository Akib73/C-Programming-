#include<stdio.h>
int gcd(int a,int b);
int main ()
{
int m,n,GCD,LCM;
printf("Enter value of first number: ");
scanf("%d",&m);
printf("Enter value of second number: ");
scanf("%d",&n);
GCD=gcd(m,n);
LCM=m*n/GCD;
printf("GCD=%d,LCM=%d",GCD,LCM);}
int gcd(int a, int b){
if(b==0){
return a;
}
return gcd(b,a%b);

}
