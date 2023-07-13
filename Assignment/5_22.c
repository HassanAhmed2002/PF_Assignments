#include<stdio.h>

void quotient(int,int);
void findremainder(int,int);
void Spaces(int);

int main() {
    int no1,no2;
    printf("\nCalculate the integer part of the quotient when integer a is divided by integer b.\n");
    printf("Enter 1st number: ");
    scanf("%d",&no1);
    printf("Enter 2nd number: ");
    scanf("%d",&no2);
    quotient(no1,no2);
    printf("\nCalculate the integer remainder when integer a is divided by integer b.\n");
    printf("Enter 1st number: ");
    scanf("%d",&no1);
    printf("Enter 2nd number: ");
    scanf("%d",&no2);
    findremainder(no1,no2);
    printf("\nSeries of digits,with two spaces between each digit.\n");
    printf("Enter number between 1 and 32767: ");
    scanf("%d",&no1);
    Spaces(no1);
    return 0;
}
void quotient(int a,int b){
    printf("Quotient:%d",a/b);
}
void findremainder(int a,int b){
    printf("Remainder:%d",a%b);
}
void Spaces(int a){
    int reminder,reverse;
    while(a){
        reminder = a % 10;
		a = a / 10;
        printf("%d  ",reminder);
    }

}