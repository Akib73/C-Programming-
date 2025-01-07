#include<stdio.h>
void swap(int*a,int*b);
int main ()
{
int m,n;
scanf("%d%d",&m,&n);
swap(&m,&n);
}
void swap(int*a,int*b)
{
printf("Bafore swaping value A=%d,B=%d",*a,*b);
int temp;
temp=*a;
*a=*b;
*b=temp;

printf("After swaping value A=%d,B=%d",*a,temp);
}
