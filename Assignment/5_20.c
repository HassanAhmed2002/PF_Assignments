#include<stdio.h>

void asterisks(int,char);
int main() {
    int side;
    char ch;
    printf("Enter number of sides: ");
    scanf("%d",&side);
    printf("Enter character you print: ");
    scanf(" %c",&ch);
    asterisks(side,ch);
    return 0;
}
void asterisks(int side,char ch){
    int i,j;
    for(i=0;i<side;i++){
        for(j=0;j<side;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}