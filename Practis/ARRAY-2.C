//2. Write a program that will take n (n = any positive integer less than 100)
// from the user and print them in descending order.
#include <stdio.h>
int main()
{
int arry[100],size,i,j,a;
printf("Enter size of arry:");
scanf("%d",&size);
printf("Enter %d value of Arry:\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&arry[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arry[i]<arry[j])
{
a=arry[i];
arry[i]=arry[j];
arry[j]=a;
}
}
printf("The numbers arranged in descending order are given below\n");
}
for(i=0;i<size;i++)
{
printf("%d\n",arry[i]);
}
return 0;
}
