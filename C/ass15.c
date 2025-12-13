#include <stdio.h>

int prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int hcf(int a, int b)
{
    int rem = 0;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{

    printf("Prime numbers below 100. : ");
    for (int i = 1; i < 100; i++)
    {
        if (prime(i))
        {
            printf("\n%d ", i);
        }
    }
    printf("Prime numbers from a to b. : ");

    int a = 12, b = 18;
    for (int i = a; i < b; i++)
    {
        if (prime(i))
        {
            printf("\n%d ", i);
        }
    }
    printf("Prime number after x. : ");

    int x = 23;
    for (int i = x + 1;; i++)
    {
        if (prime(i))
        {
            printf("\n%d ", i);
            break;
        }
    }
    printf("Hcf of %d and %d is : %d", a, b, hcf(a, b));
    // two numbers are co-prime if their hcf is 1, i.e no common divisor.
    if (hcf(a, b) == 1)
    {
        printf("\na and b are co-prime numbers.\n");
    }
    else
    {
        printf("\nA and B are not co-prime.\n");
    }
    return 0;
}