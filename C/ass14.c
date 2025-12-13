#include <stdio.h>

int fact(int n)
{
    int ans = 1;
    // if(n == 0 || n == 1) return 1;
    for (int i = n; i > 0; i--)
    {
        ans = ans * i;
    }
    return ans;
}
int count(int num)
{
    int n = 0;
    while (num > 0)
    {
        n++;
        num = num / 10;
    }
    return n;
}
void prime(int n)
{
    if (n == 0 || n == 1)
        printf("Neither prime nor composit.\n");
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("No. is not prime.\n");
            break;
        }
    }
    printf("The number is prime.\n");
}
int lcm(int a, int b)
{
    for (int max = a > b ? a : b;; max++)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
    }
}
int reverse(int n)
{
    int rem = 0;
    while (n > 0)
    {
        rem = rem * 10 + (n % 10);
        n = n / 10;
    }
    return rem;
}
int main()
{
    int n = 5;
    int a = 30, b = 25;

    printf("\nFactorial of %d is %d", n, fact(n));
    printf("\nThe number of digits in %d is %d", n, count(n));
    printf("\nIf %d is prime or not?\n", n);
    prime(n);
    printf("\nThe lcm of %d and %d is %d", a, b, lcm(a, b));
    printf("\nThe reverse of 234 is %d", reverse(234));

    return 0;
}