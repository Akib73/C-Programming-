//1. Write a program that will take n (n = any positive integer less than 100)
//from the user and find the biggest number among them.
#include <stdio.h>
int main()
{
    float a[100];
    int n,i;
printf("Enter te total Number of elements:");
scanf("%d",&n);

    for(i=1; i<=n; i++)
        {
          printf("Enter elements %d:",i);
scanf("%f",&a[i]); }
            for(i=1; i<=n; i++)
            {
                if(a[0]<a[i])
                {
                    a[0]=a[i];}}

                printf("Largest Number is %g",a[0]);
                return 0;
            }
