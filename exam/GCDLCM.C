#include<stdio.h.>
int gcd(int a, int b);
int main ()
{
int a;
int b,LCM;
scanf("%d%d",&a,&b);
int GCD=gcd(a,b);
LCM=a*b/GCD;
printf("GCD=%d,LCM=%d",GCD,LCM);
}
int gcd(int a, int b)
{
if(b==0){
return a;}
return gcd(b,a%b);
}
