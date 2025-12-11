#include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a number\n");
//     scanf("%d", &n);
//     if (n > 0)
//         printf("Number is positive.\n");
//     else if (n < 0)
//         printf("The number is negative.\n");
//     else
//     {
//         printf("The number is zero.\n");
//     }
// }

// int main()
// {
//     char ch;
//     printf("Enter a character value\n");
//     scanf("%c", &ch);
//     // int asc = ch;
//     if (ch >= 'A' && ch <= 'Z')
//         printf("Character is in Uppercase.");
//     else if (ch >= 'a' && ch <= 'z')
//         printf("The char is Lowercase.");
//     else if (ch >= '0' && ch <= '9')
//         printf("The character is a number.");
//     else
//     {
//         printf("Char is a special character.");
//     }
// }

// int main()
// {
//     int a, b, c;
//     printf("Enter three sides of a triangler\n");
//     scanf("%d %d %d", &a, &b, &c);
//     if (a <= 0 || b <= 0 || c <= 0)
//         printf("The triangle is invalid.\n");

//     if ((a + b > c) && (b + c > a) && (c + a > b))
//         printf("The triangle is valid.");
//     else
//     {
//         printf("The triangle is invalid.");
//     }
// }

int main()
{
    int n;
    printf("Enter the month number.\n");
    scanf("%d", &n);
    if (n < 1 || n > 12)
        printf("Enter a valid month number.\n");
    if (n <= 7)
    {
        if (n % 2 == 0)
        {
            if (n == 2)
                printf("The number of days are 28 but in leap year it's 29 days.");

            else
                printf("The month has 30 days.");
        }
        else
            printf("The month has 31 days.");
    }
    else
    {
        if (n % 2)
        {
            printf("The month has 30 days.");
        }
        else
        {
            printf("The month has 31 days.");
        }
    }
}