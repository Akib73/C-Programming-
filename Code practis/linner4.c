#include<stdio.h>
int main ()
{
    int search,n;
    printf("Enter total number: ");
    scanf("%d",&n);
    int N[n];
    int i,flag=0;
    for(i=0; i<n; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d",&N[i]);
    }
    printf("Search: ");
    scanf("%d",&search);
    for(i=0; i<n; i++)
    {
        if(search==N[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is not found",search);
    }
    else
    {
        printf("%d is found and its  position is %d",search,i);
    }
    return 0;
}
