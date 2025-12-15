#include <stdio.h>

float areaCircle(int r)
{
    float a = 3.14 * r * r;
    return a;
}

float SI(float p, int r, int t)
{
    return (p * r * t) / 100;
}
int evenOdd(int n)
{
    if (n % 2)
        return 0;
    return 1;
}
void firstN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
void firstOdd(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            printf("%d ", i);
    }
}
int main()
{

    int r = 2;
    printf("Area of circle is : %f\n", areaCircle(r));
    int p = 20000, t = 2;
    printf("the s.i is : %f", SI(p, r, t));
    if (evenOdd(r))
        printf("\neven.\n");
    else
        printf("\nOdd.\n");
    int n = 5;
    printf("\nFirst n natural numbers are :");
    firstN(n);
    printf("\nFirst n odd numbers are :");
    firstOdd(n);

    return 0;
}