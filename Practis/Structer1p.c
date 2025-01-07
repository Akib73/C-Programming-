#include <stdio.h>
struct employee {
int ID;
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
    printf("Enter total employee number:");
    scanf("%d",&n);
struct employee emp[n];
printf("(Enter ID , age, salary)\n");
for(i=0; i<n; i++){
        sum=sum+1;
        printf("Enter serial %d employee details:\n",sum);
printf("Enter ID:");
scanf("%d",&emp[i].ID);
printf("Enter Age:");
scanf("%d",&emp[i].age);
printf("Enter Salary:");
scanf("%f",&emp[i].salary);
}
emp_dis(n,emp);
emp_sal(n,emp);
}
void emp_dis (int a,struct employee w[])
{
int i;
int sum=0;
printf("Display all employee details:\n");
printf("Serial\t ID\t Age\t salary\n");
for(i=0; i<a; i++){
        sum=sum+1;
printf("%d\t %d\t %d\t %g\n",sum,w[i].ID,w[i].age,w[i].salary);
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
printf("Serial\t ID\t Age\t salary\n");
int sum=0;
for(i=0; i<a; i++)
{
    sum=sum+1;
    if(max==w[i].salary){

     printf("%d\t %d\t %d\t %g\n",sum,w[i].ID,w[i].age,w[i].salary);
     break;
    }
}}
