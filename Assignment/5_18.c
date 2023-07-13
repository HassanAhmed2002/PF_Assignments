#include<stdio.h>
int even(int);
int main() {
    int n,no,i;
    printf("How many number you want to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter number: ");
        scanf("%d",&no);
        if(even(no) == 1){
            printf("Even number");
        }
        else{
            printf("Odd number");
        }
        printf("\n");
    }
    return 0;
}
int even(int no){
    if(no%2==0){
        return 1;
    }
    else{
        return 0;
    }
}