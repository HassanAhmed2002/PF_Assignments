#include<stdio.h>

int multiple(int,int); 
int main() {
    int no1,no2;
    printf("Enter first number: ");
    scanf("%d",&no1);
    printf("Enter second number: ");
    scanf("%d",&no2);
    if(multiple(no1,no2) == 1){
        printf("No2 is multiple of No1");
    }
    else{
        printf("No2 is not multiple of No1");
    }
    return 0;
}
int multiple(int a,int b){
    if(b%a==0){
        return 1;
    }
    else{
        return 0;
    }
} 