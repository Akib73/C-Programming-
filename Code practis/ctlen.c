#include<stdio.h>
int catlan_num(int n);
int main ()
{
int a,cat;
scanf("%d",&a);

printf("%d",catlan_num(a));
}
int catlan_num(int n)
{
int i,j;
int c[n];
c[0]=c[1]=1;
for(i=2; i<=n; i++){
        c[i]=0;
for(j=0; j<i; j++){

c[i]+=c[j]*c[i-j-1];}}
return c[n];
}
