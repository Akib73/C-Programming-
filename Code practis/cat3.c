#include<stdio.h>
int main ()
{
int n,cat;
scanf("%d",&n);
int c[n+1];
int i,j;
c[0]=1;
c[1]=1;
for(i=2; i<n+1; i++){
        c[i]=0;
for(j=0; j<i; j++){
c[i]+=c[j]*c[i-j-1];}}
for (i=0; i<n+1; i++){
    printf("%d,",c[i]);
}


return 0;
}
