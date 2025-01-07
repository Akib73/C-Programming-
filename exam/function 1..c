#include<stdio.h>
int sum_cunt_rev(int n);
int main ()
{
int n;
scanf("%d",&n);
sum_cunt_rev(n);
}
int sum_cunt_rev(int n)
{
    int s,r;
    s=n;
int sum=0,count=0,rev=0,temp;
while(s!=0){
sum+=s%10;
s=s/10;
}
printf("Sum of digits =%d",sum);
r=n;
 while(r!=0){
 rev=(rev*10)+r%10;
 r=r/10;
 }
printf("rev=%d",rev);
temp=n;
while(temp!=0){
temp=temp/10;
count=count+1;

}
printf("Total digits=%d",count);

}
