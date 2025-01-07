#include <stdio.h>
int sum_digits(int a);
int count_digits(int a);
void rev_num(int a);
int main ()
{
    int n,sum, count;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum= sum_digits(n);
    count=count_digits(n);
    printf("Sum of %d number digits is %d\n",n,sum);
    printf("Count of %d number digits is %d\n",n,count);
    rev_num(n);
}
int sum_digits(int a)
{
    int i,sum=0;
    for(i=0; i<=a; i++)
    {
        sum=sum+i;
    }
    return sum;
}
int count_digits(int a)
{
    int count=0,i;
    for(i=0; i<=a; i++)
    {
        count=count+1;
    }
    return count;
}

void rev_num(int a)
{
    int i;
    printf("Revres of Number is :");
    for(i=a; i>=1; i--)
    {
        printf("%d, ",i);
    }
    printf("0.");
}



