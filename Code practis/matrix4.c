#include<stdio.h>
int main ()
{
    int r1,c1,r2,c2,i,j,k,sum;
    printf("Enter row and column of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column of second matrix: ");
    scanf("%d%d",&r2,&c2);

    int first[r1][c2],second[r2][c2];
    int result[r1][c2];
    if(c1==r2)
    {
        printf("Enter First Matrix elements:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("first[%d][%d]: ",i,j);
                scanf("%d",&first[i][j]);
            }
        }
        printf("Enter Second Matrix elements:\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("second[%d][%d]: ",i,j);
                scanf("%d",&second[i][j]);
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
                    sum+=first[i][k]*second[k][j];
                }
                result[i][j]=sum;

            }
        }

//printf
        printf("First Matrix:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d\t",first[i][j]);
            }
            printf("\n\n");
        }
        printf("Second Matrix:\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d\t",second[i][j]);
            }
            printf("\n\n");
        }
        printf("Result:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d\t",result[i][j]);
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

