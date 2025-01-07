#include<stdio.h>
int main ()

{int r1,r2 ,c1,c2,sum;
printf("Enter row and column of A matrix : ");
scanf("%d%d",&r1,&c1);
printf("Enter row and column of A matrix : ");
scanf("%d%d",&r2,&c2);
int A[r1][c1],B[r2][c2],C[r2][c1];
int i, j, k;
if(c1==r2){
printf("Enter A Matrix :");
for(i=0; i<r1; i++)
{
for(j=0; j<c1; j++){
printf("Enter the value A[%d][%d]",i,j);
scanf("%d",&A[i][j]);}}
printf("Enter B Matrix :");
for(i=0; i<r2; i++)
{
for(j=0; j<c2; j++){
printf("Enter the value B[%d][%d]",i,j);
scanf("%d",&B[i][j]);}}
for(i=0; i<r2; i++){
for(j=0; j<c1; j++){
        sum=0;
for(k=0; k<c1; k++){
sum+=A[i][k]*B[k][j];}
C[i][j]=sum;}}
for(i=0; i<r1; i++){
for(j=1; j<c1; j++){
printf("%d\t",A[i][j]);}printf("\n\n");}
for(i=0; i<r2; i++){
for(j=1; j<c2; j++){
printf("%d\t",B[i][j]);}printf("\n\n");}
for(i=0; i<r1; i++){
for(j=1; j<c2; j++){
printf("%d\t",C[i][j]);}printf("\n\n");}

}
else{
    printf("Math Error!");
}
return 0;
}


