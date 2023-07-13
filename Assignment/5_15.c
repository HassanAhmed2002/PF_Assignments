#include<stdio.h>

double hypotenuse(double,double);

int main() {
    double side1,side2;
    printf("Enter length of side1: ");
    scanf("%lf",&side1);
    printf("Enter length of side2: ");
    scanf("%lf",&side2);
    printf("Length of Hypotenuse is: %lf",hypotenuse(side1,side2));
    return 0;
}
double hypotenuse(double a,double b){
    double c = a*a + b*b;
    return c;
}