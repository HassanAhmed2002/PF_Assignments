#include <stdio.h>
#include <stdlib.h>
#define row 6
#define col 2
void Input_Matrix(float (*matrix1)[col], float (*matrix2)[col]);
void Subtraction(float (*matrix1)[col], float (*matrix2)[col], float (*matrix3)[col]);
void Display(float (*matrix1)[col], float (*matrix2)[col], float (*matrix3)[col]);
int main()
{
    float matrix1[row][col];
    float matrix2[row][col];
    float matrix3[row][col];
    Input_Matrix(matrix1, matrix2);
    Subtraction(matrix1, matrix2, matrix3);
    Display(matrix1, matrix2, matrix3);
    return 0;
}
void Input_Matrix(float (*matrix1)[col], float (*matrix2)[col])
{
    int i, j;
    printf("Female:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j == 0)
            {
                printf("Black:\n");
                scanf("%f", &matrix1[i][j]);
            }
            else
            {
                printf("White:\n");
                scanf("%f", &matrix1[i][j]);
            }
        }
    }
    printf("\nMale \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j == 0)
            {
                printf("Black:\n");
                scanf("%f", &matrix2[i][j]);
            }
            else
            {
                printf("White:\n");
                scanf("%f", &matrix2[i][j]);
            }
        }
    }
    system("cls");
}
void Subtraction(float (*matrix1)[col], float (*matrix2)[col], float (*matrix3)[col])
{

    int i, j;
    int year = 1950;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void Display(float (*matrix1)[col], float (*matrix2)[col], float (*matrix3)[col])
{
    int i, j;
    int year = 1950;
    printf("%22s\n", "Female");
    printf("%s%10s%10s\n", "Year", "Black", "White");
    for (i = 0; i < row; i++)
    {
        printf("%d", year);
        for (j = 0; j < col; j++)
        {
            printf("%10.1f", matrix1[i][j]);
        }
        year = year + 10;
        printf("\n");
    }
    printf("\n\n");
    year = 1950;
    printf("%22s\n", "Male");
    printf("%s%10s%10s\n", "Year", "Black", "White");
    for (i = 0; i < row; i++)
    {
        printf("%d", year);
        for (j = 0; j < col; j++)
        {
            printf("%10.1f", matrix2[i][j]);
        }
        printf("\n");
        year = year + 10;
    }
    printf("\n\n");
    year = 1950;
    printf("%22s", "Difference\n");
    printf("%s%10s%10s\n", "Year", "Black", "White");
    for (i = 0; i < row; i++)
    {
        printf("%d", year);
        for (j = 0; j < col; j++)
        {
            printf("%10.1f", matrix3[i][j]);
        }
        printf("\n");
        year = year + 10;
    }
}
