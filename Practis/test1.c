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

for(i=0; i<n; i++){
sum+=a[i];
printf("%d ",sum);}

}