#include<stdio.h>

void shape(int);

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    shape(rows);
    return 0;
}
void shape(int rows){
    int i,k=0,space,j;
    for (i=1; i<=rows; ++i,k=0) {
        for (space=1; space<=rows-i; ++space)
        { printf("  "); }
        while (k!=2*i-1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    } 
    printf("\n\n");

    for (i=1; i<=rows; ++i) {
        for (j=1; j<=i; ++j)
        { printf("* "); }
        printf("\n");
    } 
    printf("\n\n");
     for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows; j++)
        {
            if(i==1 || i==rows || j==1 || j==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }



}