#include <stdio.h>
struct mark{
int id;
float mark [3];
};
int main ()
{
struct mark st[4];
int i,j;
float sum;
for(i=0;i<4; i++){
printf("Enter id:");
scanf("%d",&st[i].id);
for(j=0;j<3; j++){

scanf("%f",&st[i].mark[j]);}
}
//total mark
for(i=0; i<4; i++)
{sum=0;
for(j=0; j<3; j++){
sum+=st[i].mark[j];
}
printf("%d id total number is: %g\n",st[i].id,sum/3);}
}
