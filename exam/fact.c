#include<stdio.h>
int fact(int a);
int main ()
{
int n;
scanf("%d",&n);
int sum=0;
int i;
for(i=1; i<=n; i++){
sum+=fact(i);
}
printf("%d",sum);
}

int fact(int a)
{

if(a==1)
{
return 1;
}
return a*fact(a-1);
}
