#include <stdio.h>
int main ()
{
int search;
int student[5];
int i,j;
int flag =0;
for(i=0; i<5; i++);{
for(j=1; j<=i; j++) {
printf("Enter  roll number: ");
scanf("%d",&student[j]);
}}
printf("Search Roll: ");
scanf("%d",&search);
for(i=0; i<5; i++)
{
if(search==student[i])
{
flag=1;
break;}}
if(flag==0)
printf("Not found");
else
printf("%d is found and its position is %d",student[i],i);
return 0;
}
