#include <stdio.h>
int main()
{


    int r1,r2,c1,c2,i,j,k;
    printf("Enter first matrix border : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter second matrix border : ");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Not possible\n");
        printf("Enter first matrix border : ");
        scanf("%d%d",&r1,&c1);
        printf("Enter second matrix border : ");
        scanf("%d%d",r2,c2);

    }
    int matrix1[r1][c1],matrix2[r2][c2],a[r1][c2];
    printf("Enter first matrix  : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&matrix1[i][j]);

        }
    }
    printf("Enter second matrix : ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&matrix2[i][j]);


        }
        printf("First matrix :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",matrix1[i][j]);
                printf("\n");

            }

        }
        printf("Second matrix :\n");
        for(i=0;i<r2;i++)
        {
            printf("\t");
            for(j=0; j<c2; j++)
            {
                printf("%d ",matrix2[i][j]);
                printf("\n");

            }
        }
        for(k=0;k<r2;k++){
              a[i]+=matrix1[i]*matrix2[k];

        }
        for(k=0;k<c1,k++)
        {
            a[j]+=matrix1[k]*matrix2[j];
        }
        printf("%d",a[i][j]);
        printf("\n");

    }
    return 0;
}
