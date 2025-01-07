#include <stdio.h>
struct employee {
char name[3000];
int age;
float salary;
int srial;
};
void emp_dis (int a,struct employee w[]);
int main ()
{
    int i;
    int n;
    printf("Enter total employee nymber");
    scanf("%d",&n);
struct employee emp[n];
printf("Enter Name , age, salary: ");
for(i=0; i<n; i++){
        printf("Enter serial %d ")
scanf("%s%d%f",emp[i].name,&emp[i].age,&emp[i].salary);
}
emp_dis(n,emp);
}
void emp_dis (int a,struct employee w[])
{
int i;
for(i=0; i<a; i++){
printf("Name:%s\n Age:%d\n salary:%g\n",w[i].name,w[i].age,w[i].salary);
}
}
