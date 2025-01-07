#include <stdio.h>
int main ()
{
    int A[5];
    int B[5];
    int AB[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("Enter A:\n");
      scanf("%d",&A[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("Enter B:\n");
        scanf("%d",&B[i]);
        }
        for (i=0; i<5; i++){
        AB[i]=A[i]+B[i];}
        for(i=0; i<5; i++)
        {
            printf("%d",AB[i]);
        }


       return 0;
}
