#include <stdio.h>
#include <stdlib.h>
#define row 4
#define col 4
void Input_Matrix(int (*matrix1)[col]);
void Transpose(int (*matrix1)[col]);
int main()
{
    int matrix1[row][col];
    Input_Matrix(matrix1);
    Transpose(matrix1);
    return 0;
}
void Input_Matrix(int (*matrix1)[col])
{
    int i, j;
    printf("1st Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    system("cls");
    printf("1st Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%2d\t", matrix1[i][j]);
        }
        printf("\n");
    }
}
void Transpose(int (*matrix1)[col])
{
    int transpose[row][col];
    int i, j, k;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            transpose[j][i] = matrix1[i][j];
        }
    }
    printf("Transpose: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%2d\t", transpose[i][j]);
        }
        printf("\n");
    }
}
