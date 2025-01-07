#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);
int main()
{
int m,n;
printf("Enter the value of a: ");
scanf("%d",&m);
printf("Enter the value of b: ");
scanf("%d",&n);
printf("GCD of a and b is: %d",gcd(m,n));
lcm(m,n);
}
int gcd(int a, int b)
{
if(b==0){
return a;}
return gcd(b,a%b);
}
int lcm(int a,int b){
int LCM;
LCM=a*b/gcd(a,b);
printf("LCM=%d",LCM);
}
