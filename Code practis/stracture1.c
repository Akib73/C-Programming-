#include <stdio.h>
struct mark{
int id;
float mark [3];
};
int main ()
{
struct mark st[4];
int i,j;
for(i=0;i<4; i++){
printf("Enter id:");
scanf("%d",&st[i].id);
for(j=0;j<3; j++){

scanf("%f",&st[i].mark[j]);}
}
//print
for(i=0; i<4; i++)
{printf("ID:%d\n",st[i].id);
for(j=0; j<3; j++){
    printf("%g\n",st[i].mark[j]);
}}
}
