#include <stdio.h>
double circle(double r);
double circle_Peri(double r);
double  PI ();

int main ()
{
    double r;
    Print();
    scanf("%lf",&r);
    printf("Area:%lf\n",circle(r));
    circle_Peri(r);
    return 0;
}
void Print();
double PI()
{
    return 3.1416;
}
double circle(double r)
{
    return PI()*r*r;

}
void Print()
{
    printf("Enter redius");
}
double circle_Peri(double r)
{
    printf("Perimeter:%lf",2*PI()*r);
}

