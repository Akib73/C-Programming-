#include <stdio.h>
int main ()
{
int n,m,i,j;
printf("Enter first vector total product");
scanf("%d",&n);
printf("Enter secound vector total product");
scanf("%d",&m);
float a[n];
float b[m];
float result =0;
for(i=0; i<n; i++)
{
printf("Enter %d element:",i);
scanf("%f",&a[i]);
}for(i=0; i<m; i++)
{
printf("Enter %d element:",i);
scanf("%f",&b[i]);
}
for(i=0; i<n; i++)
{
result=result+a[i]*b[i];
}
printf("%g",result);
    return 0;
}
