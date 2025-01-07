#include <stdio.h>
int main()
{
    int A[5];
    int i;
    int sum=0;
    for(i=0; i<5; i++)
    {
        printf("Input values:\n");
        scanf("%d",&A[i]);
        if (A[i]/2==0)
        {
            sum=sum+A[i];

        }
        else
        {
            sum=sum+A[i];

        }

    }
    printf("Sum of even=%d",sum);
    printf("Sum of odd=%d",sum);

    return 0;
}
