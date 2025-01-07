#include<stdio.h>
int main ()
{
    int r1,c1,r2,c2,i,j,k,sum;
    printf("Enter row and column of A matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column of B matrix: ");
    scanf("%d%d",&r2,&c2);

    int A[r1][c1],B[r2][c2];
    int C[r1][c2];
    if(c1==r2)
    {
        printf("Enter A Matrix elements:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("A[%d][%d]: ",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        printf("Enter B Matrix elements:\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("second[%d][%d]: ",i,j);
                scanf("%d",&B[i][j]);
            }
        }
//result
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                sum=0;
                for(k=0; k<c1; k++)
                {
                    sum+=A[i][k]*B[k][j];
                }
                C[i][j]=sum;

            }
        }

//printf
        printf("A Matrix:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d\t",A[i][j]);
            }
            printf("\n\n");
        }
        printf("B Matrix:\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d\t",B[i][j]);
            }
            printf("\n\n");
        }
        printf("C:A*B\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("Math Erorr!");
    }

    return 0;
}

