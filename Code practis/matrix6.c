#include<stdio.h>
int main ()
{
int r1,c1,r2,c2,i,j,k,sum;
printf("Enter first matrix row and column : ");
scanf("%d%d",&r1,&c1);
printf("Enter second matrix row column : ");
scanf("%d%d",&r2,&c2);
int first[r1][c1],second[r2][c2],result[r1][c2];
if(c1==r2){
for(i=0; i<r1; i++){
for(j=0; j<c1; j++){
printf("First [%d][%d]: ",i,j);
scanf("%d",&first[i][j]);}}
for(i=0; i<r2; i++){
for(j=0; j<c2; j++){
printf("Second[%d][%d]: ",i,j);
scanf("%d",&second[i][j]);}}
//result
for(i=0; i<r1; i++){
for(j=0; j<c2; j++){
sum=0;
for(k=0; k<c1; k++){
sum+=first[i][k]*second[k][j];
result[i][j]=sum;}}}
//printf
for(i=0; i<r1; i++){
for(j=0; j<c1; j++){
printf("%d\t",first[i][j]);}
printf("\n\n");}
for(i=0; i<r2; i++){
for(j=0; j<c2; j++){
printf("%d\t",second[i][j]);}
printf("\n\n");}
for(i=0; i<r1; i++){
for(j=0; j<c2; j++){
printf("%d\t",result[i][j]);}
printf("\n\n");}}}
