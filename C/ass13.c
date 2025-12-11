#include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the value of  \n");
//     scanf("%d", &n);
//     int s = 0;
//     int i = 1;
//     while (i <= n)
//     {
//         s += i;
//         i++;
//     }
//     printf("The sum of first %d natural numbers is %d ", n, s);
// }

// int main()
// {
//     int sum = 0;
//     int n;
//     printf("Enter the valuue of n ");
//     scanf("%d", &n);
//     int i = 2;
//     int in = 0;
//     while (in < n)
//     {
//         sum += i;
//         i += 2;
//         in++;
//     }
//     printf("The sum is %d ", sum);
// }

// int main()
// {
//     int n;
//     printf("Enter the value of n");
//     scanf("%d", &n);
//     int i = 1, sum = 0;
//     while (i <= n)
//     {
//         sum += i * i;
//         i++;
//     }
//     printf("Sum is %d", sum);
// }

int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);
    int i = 1, sum = 0;
    while (i <= n)
    {
        sum += i * i * i;
        i++;
    }
    printf("Sum is %d", sum);
}