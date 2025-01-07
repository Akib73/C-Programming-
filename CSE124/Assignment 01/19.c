#include <stdio.h>
int main ()
{
int Years,Months,Days;
printf("Input the number the days:\n");
scanf("%d",&Days);
Years=Days/365;
Days=Days%365;
Months=Days/30;
Days=Days%30;
printf("Years:%d\nMonths:%d\nDays:%d",Years,Months,Days);
return 0;
}
