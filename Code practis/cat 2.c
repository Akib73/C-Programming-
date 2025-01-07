#include<stdio.h>
int main ()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
int c[n];
int i,j;
int flag=0;
c[0]=1;
c[1]=1;
for(i=2; i<=n; i++){
        c[i]=0;
for(j=0; j<i; j++){
c[i]+=c[j]*c[i-j-1];}
}
for (i=0; i<=n; i++){
    if(n==c[i]){
        flag=1;
        break ;
    }

}
if(flag==0){
    printf("%d is not a catlan number",n);
}
else {
    printf("%d is a catlan number",n);
}
return 0;
}
