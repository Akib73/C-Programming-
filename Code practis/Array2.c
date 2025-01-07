#include<stdio.h>
int main ()
{
int a[100];
int n,i,j;
scanf("%d",&n);
for(i=1; i<=n; i++){
printf("Enter Number%d: ",i);
scanf("%d", &a[i]);
}printf("Descending order: ");
for(j=n; j>=1; j--){

printf("%d ",a[j]);

}


return 0;
}
