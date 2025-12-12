#include <stdio.h>

// int main()
// {

//     int marks;
//     printf("Enter the amrks obtained by the student.\n");
//     scanf("%d", &marks);

//     switch (marks / 10)
//     {
//     case 10:
//     {
//        if(marks%10 == 0){
//           printf("Grade A.\n");}
//         break;
//     }

//     case 9:
//     {
//         printf("Grade A");
//         break;
//     }
//     case 8:
//     {
//         printf("Grade B.");
//         break;
//     }
//     case 7:
//     {
//         printf("Grade C.");
//         break;
//     }
//     case 6:
//     {
//         printf("Grade D.");
//         break;
//     }
//     case 5:
//     {
//         printf("Grade E.");
//         break;
//     }
//     case 4:
//     case 3:
//     case 2:
//     case 1:
//     case 0:
//     {
//         printf("Grade F.");
//         break;
//     }
//     default:
//     {
//         printf("Invalid marks.");
//         break;
//     }
//     }
//     return 0;
// }

// int factorial(int num)
// {
//     if (num == 1 || num == 0)
//         return 1;
//     return num * factorial(num - 1);
// }

// void evenOdd(int num)
// {
//     if (num % 2)
//     {
//         printf("The number is Odd.");
//     }
//     else
//     {
//         printf("The number is Even.\n");
//     }
// }

// float area(int num)
// {
//     float a = 3.14 * num * num;

//     return a;
// }

// int sum(int num)
// {
//     return (num * (num + 1)) / 2;
// }

// int main()
// {

//     int ch;
//     int x, n;
//     printf("Enter a number.\n");
//     scanf("%d", &x);
//     printf("-----MENU------\n");
//     printf("1.Factorial.\n");
//     printf("2.Even odd check\n");
//     printf("3.Area of a circle.\n");
//     printf("4.Sum of first n nuatural numbers.\n");
//     printf("5.Exit.\n");

//     while (ch != 5)
//     {
//         printf("Choose the number from the menu.\n");
//         scanf("%d", &n);
//         switch (n)
//         {
//         case 1:
//         {
//             int n = factorial(x);
//             printf("The factorial of %d is %d", x, n);
//             break;
//         }
//         case 2:
//         {
//             evenOdd(x);
//             break;
//         }
//         case 3:
//         {
//             float a = area(x);
//             printf("The area of circle with radius %d is %f", x, a);

//             break;
//         }
//         case 4:
//         {
//             int s = sum(x);
//             printf("The sum of first %d numbers is %d", x, s);
//             break;
//         }
//         case 5:
//         {
//             printf("Exit\n");
//             break;
//         }
//         }
//         printf("\nPress 5 if you want to exit.");
//         scanf("%d", &ch);
//     }
//     return 0;
// }

// int main()
// {

//     char c;
//     printf("Enter a character:\n");
//     scanf("%c", &c);
//     int ch = c;
//     switch (ch / 10)
//     {
//     case 6:
//     {
//         if (ch % 10 >= 5)
//             printf("Uppercase.\n");
//         break;
//     }
//     case 7:
//     case 8:
//     {
//         printf("Uppercase.\n");
//         break;
//     }
//     case 9:
//     {
//         if (ch % 10 == 0)
//         {
//             printf("Uppercase.\n");
//         }
//         else if (ch % 10 >= 7)
//         {
//             printf("Lowercase.\n");
//         }
//         break;
//     }
//     case 10:
//     case 11:
//     {
//         printf("Lowercase.\n");
//         break;
//     }
//     case 12:
//     {
//         if (ch % 10 <= 2)
//         {
//             printf("Lowercase.\n");
//         }
//         break;
//     }
//     default:
//     {
//         printf("The character is a special character.\n");
//         break;
//     }
//     }
//     return 0;
// }

int lcm(int a, int b)
{
    for (int max = a > b ? a : b;; max++)
    {
        if ((max % a == 0) && (max % b == 0))
        {
            return max;
            break;
        }
    }
}
int sum(int n)
{
    int s = 0;
    while (n != 0)
    {
        int rem = n % 10;
        s += rem;
        n = n / 10;
    }
    return s;
}

float volume(int a, int b, int c)
{
    return a * b * c;
}
int prime(int n)
{
    if (n <= 1)
    {
        printf("nhi nhi jana.\n");
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{

    return 0;
}
