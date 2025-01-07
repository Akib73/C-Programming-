#include <string.h>
struct emp{
int s;
char name[1000];
int age;
char address[3000];
};
int main ()
{
int i,j;
int n;
scanf("%d",&n);
struct emp w[n];
for(i=0;i<n; i++){
printf("Employ sreial:");
scanf("%d",&w[i].s);
for(j=0;j<i; j++){
printf("Enter name:");
scanf(w[i].name);
printf("Enter age:");
scanf("%d",w[i].age);
printf("Enter address:");
gets(w[i].address);}
}
char search[3000];
gets(search);
for(i=0; i<n; i++)
{
    if (search[3000]=w[i].address){
        puts(w[i].name);
    }
}

}
