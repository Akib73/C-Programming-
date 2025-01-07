#include <stdio.h>
struct employee {
char name[3000];
int age;
float salary;

};
void emp_dis (int a,struct employee w[]);
void emp_sal(int a, struct employee w[]);
int main ()
{
    int i;
    int n;
    int sum=0;
    printf("Enter total employee nymber:");
    scanf("%d",&n);
struct employee emp[n];
printf("(Enter Name , age, salary)\n");
for(i=0; i<n; i++){
        sum=sum+1;
        printf("Enter serial %d employee details:\n",sum);
scanf("%s%d%f",emp[i].name,&emp[i].age,&emp[i].salary);
}
emp_dis(n,emp);
emp_sal(n,emp);
}
void emp_dis (int a,struct employee w[])
{
int i;
int sum=0;
printf("Display all employee details:\n");
printf("Serial\t Name\t Age\t salary\n");
for(i=0; i<a; i++){
        sum=sum+1;
printf("%d\t %s\t %d\t %g\n",sum,w[i].name,w[i].age,w[i].salary);
}
}
void emp_sal(int a, struct employee w[])
{
    int i;
    int max =w[0].salary;
    for(i=1; i<a; i++){
       if(w[i].salary>max){
      max=w[i].salary;}

}
printf("Highest salary employee details:\n");
printf("Serial\t Name\t Age\t salary\n");
int sum=0;
for(i=0; i<a; i++)
{
    sum=sum+1;
    if(max==w[i].salary){

     printf("%d\t %s\t %d\t %g\n",sum,w[i].name,w[i].age,w[i].salary);
     break;
    }
}}
