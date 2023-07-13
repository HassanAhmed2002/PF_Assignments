#include<stdio.h>

void asterisks(int);
int main() {
    int side;
    printf("Enter number of sides: ");
    scanf("%d",&side);
    asterisks(side);
    return 0;
}
void asterisks(int side){
    int i,j;
    for(i=0;i<side;i++){
        for(j=0;j<side;j++){
            printf("*");
        }
        printf("\n");
    }
}