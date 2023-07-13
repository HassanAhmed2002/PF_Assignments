#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 3
void Input_Matrix(int (*matrix1)[col], int (*matrix2)[col]);
void Multiplication(int (*matrix1)[col], int (*matrix2)[col]);
int main()
{
    int matrix1[row][col];
    int matrix2[row][col];
    Input_Matrix(matrix1, matrix2);
    return 0;
}
void Input_Matrix(int (*matrix1)[col], int (*matrix2)[col])
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
    printf("\n2nd Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
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
    printf("2nd Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%2d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    Multiplication(matrix1, matrix2);
}
void Multiplication(int (*matrix1)[col], int (*matrix2)[col])
{
    int matrix3[row][col];
    int i, j, k;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            matrix3[i][j] = 0;
            for (k = 0; k < col; k++)
            {

                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("3rd Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%2d\t", matrix3[i][j]);
        }
        printf("\n");
    }
}
