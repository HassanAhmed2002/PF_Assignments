#include<stdio.h>
float minimum(float,float,float);
int main() {
    float no1,no2,no3;
    printf("Enter first number :");
    scanf("%f", &no1);
    printf("Enter second number :");
    scanf("%f",&no2);
    printf("Enter third number :");
    scanf("%f", &no3);
    if(minimum(no1,no2,no3) == no1){
        printf("First number is minimum");
    }
    if(minimum(no1,no2,no3) == no2){
        printf("Second number is minimum");
    }
    if(minimum(no1,no2,no3) == no3){
        printf("Third number is minimum");
    }
    return 0;
}


float minimum(float a,float b , float c){
    float small;
if(a<b)
    {
        if(b<c)
            small = a;
        else
        {
            if(a<c)
                small = a;
            else
                small = c;
        }
    }
    else
    {
        if(b<c)
            small = b;
        else
            small = c;
    }
    return small;
}