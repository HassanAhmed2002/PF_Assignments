#include<stdio.h>

int power(int,int);
int main() {
    int base,exponent;
    printf("Enter Base : ");
    scanf("%d",&base);
    printf("Enter Exponent: ");
    scanf("%d",&exponent);
    printf("Result: %d",power(base,exponent));
    return 0;
}
int power(int base,int exponent){
    while (exponent != 1)
    {
        return base * power(base , (exponent-1));
    }
    return base;
    
}