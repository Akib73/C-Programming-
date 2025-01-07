#include <stdio.h>
int main ()
{
    int search,n;
    printf("Enter the value of total student: ");
    scanf("%d",&n);
    int student[n];
    int i,j;
    int flag =0;
    for(i=0; i<n; i++)
    {
            printf("Enter  roll number: ");
            scanf("%d",&student[i]);
        }

    printf("Search Roll: ");
    scanf("%d",&search);
    for(i=0; i<n; i++)
    {
        if(search==student[i]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Not found");
        else printf("%d is found and its position is %d",student[i],i);

    return 0;
}
