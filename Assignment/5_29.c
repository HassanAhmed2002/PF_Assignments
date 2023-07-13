#include <stdio.h>
int GCD(int, int);
int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    printf("G.C.D of %d and %d is %d", n1, n2, GCD(n1, n2));

    return 0;
}
int GCD(int n1, int n2)
{
    int i, gcd;
    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    return gcd;
}