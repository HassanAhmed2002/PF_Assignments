#include <stdio.h>

void perfect(int);

int main()
{
    int number;
    for (number= 1; number <= 1000; number++)
    {
        perfect(number);
    }
    return 0;
}

void perfect(int number)
{
    int i, j = 0;
    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
            j = j + i;
    }
    if (number == j)
    {
        printf("\nPerfect number is %d = ",number);
        for (i = 1; i < number; i++)
        {
            if (number % i == 0)
                printf("%d +", i);
        }
    }
}