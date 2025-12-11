#include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enetr a number\n");
//     scanf("%d", &a);
//     if (a > 0)
//         printf("Positive");
//     else
//         printf("Non-positive");
// }

// int main()
// {
//     int a;
//     printf("Enetr a number\n");
//     scanf("%d", &a);
//     if (a % 5 == 0)
//         printf("Divisible");
//     else
//         printf("Non-divisible");
// }

// int main()
// {
//     int a;
//     printf("Enetr a number\n");
//     scanf("%d", &a);
//     if (a % 2 == 0)
//         printf("Even");
//     else
//         printf("Odd");
// }

// int main()
// {
//     int a;
//     printf("Enetr a number\n");
//     scanf("%d", &a);
//     if ((a & 1) == 0)
//         printf("Even");
//     else
//         printf("Odd");
// }

int main()
{
    int a;
    printf("Enetr a number\n");
    scanf("%d", &a);
    int x = (a / 2) * 2;
    if (x == a)
        printf("Even");
    else
        printf("Odd");
}