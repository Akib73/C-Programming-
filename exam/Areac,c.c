#include<stdio.h>
void area_circle(float n);
int main ()
{
float r;
scanf("%f",&r);
area_circle(r);
}
void area_circle(float n)
{
float pi=3.1416;
float Area;
Area=pi*n*n;
printf("area of a circle=%g",Area);
}
