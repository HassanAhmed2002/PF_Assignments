#include<stdio.h>


int integerPower(int, unsigned int);

int main() {
    int base ;
    unsigned int exponent;
    printf("Enter Base: ");
    scanf("%d",&base);
    printf("Enter Exponent: ");
    scanf("%u",&exponent);
    printf("Power of Integer is: %d",integerPower(base,exponent));
    return 0;
}
int integerPower(int a, unsigned int b){
    int c=1,i;
    for(i=0;i<b;i++){
        c = c*a;
    }
    return c;
}