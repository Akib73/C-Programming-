#include <stdio.h>
int main ()
{
int n,i;
printf ("Enter total student :");
scanf("%d",&n);
int a[n];
for(i=0; i<5; i++)
{
printf("Enter roll:");
scanf("%d",&a[i]);
}
int flag=0;
int search;
printf("Search roll :");
scanf("%d",&search);
for(i=0; i<n; i++){
if(search==a[i])
{
flag=1;
break ;}
}
if (flag==0){
printf ("%d is not found ",search);}
else
{
printf("%d is found and its index is %d",search,i);
}
return 0;
}
