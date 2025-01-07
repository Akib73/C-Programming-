#include <stdio.h>
int main ()
{
int A[5];
int i;
int evensum=0;
int oddsum=0;
for(i=0; i<5; i++)
{
printf("Input values:\n");
scanf("%d",&A[5]);}
for(i=0; i<5; i++){
if(A[i]%2==0){evensum=evensum+A[i];
}
else{
        oddsum=oddsum+A[i];
    }
}
printf("Even numbers:%d",A[i]);
printf("Odd numbers:%d",A[i]);
return 0;
}
