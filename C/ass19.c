#include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the month number:\n");
//     scanf("%d", &n);
//     switch (n)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//     {
//         printf("The month has 31 days\n");
//         break;
//     }
//     case 2:
//     {
//         printf("The month has 28 days or 29 days in a leap year.\n");
//         break;
//     }
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//     {
//         printf("The month has 30 days.\n");
//         break;
//     }
//     Default:
//     {
//         printf("Enter a valid monthh number.\n");
//         break;
//     }
//     }

//     return 0;
// }

// int main()
// {

//     int x;

//     printf("-----MENU------\n");
//     printf("1.Addition\n");
//     printf("2.Subtraction\n");
//     printf("3.Multiplication\n");
//     printf("4.Division\n");
//     printf("5.Exit.\n");
//     int c;
//     while (c != 5)
//     {
//         printf("Choose the number from the menu: \n");
//         scanf("%d", &x);

//         switch (x)
//         {
//         case 1:
//         {
//             printf("Addition.\n");
//             break;
//         }
//         case 2:
//         {
//             printf("subtraction.\n");
//             break;
//         }
//         case 3:
//         {
//             printf("mULTIPLICAtion.\n");
//             break;
//         }
//         case 4:
//         {
//             printf("Division.\n");
//             break;
//         }
//         case 5:
//         {
//             printf("Exit.\n");
//             break;
//         }
//         Default:
//         {
//             printf("Wrong input\n");
//             break;
//         }
//         }
//         printf("Do you want to continue? press 5 to exit.?");
//         scanf("%d", &c);
//     }

//     return 0;
// }

// int main()
// {

//     int n;
//     printf("Enter the number of day in week.\n");
//     scanf("%d", &n);
//     switch (n)
//     {
//     case 1:
//     {
//         printf("Goodmorning, today is Monday\n");
//         break;
//     }
//     case 2:
//     {
//         printf("    goodmorning today is tuesday\n");
//         break;
//     }
//     case 3:
//     {
//         printf("Goodmorning, today is Wednesday\n");
//         break;
//     }
//     case 4:
//     {
//         printf("gOodmornning today is thursday.\n");
//         break;
//     }
//     case 5:
//     {
//         printf("Goodmorning today is friday.\n");
//         break;
//     }
//     case 6:
//     {
//         printf("goodmorning today is saturday.\n");
//         break;
//     }
//     case 7:
//     {
//         printf("goodmorning today is sunday.\n");
//         break;
//     }
//     default:
//     {
//         printf("Enter a valid day number.\n");
//         break;
//     }
//     }
//     return 0;
// }

//

int main()
{

    int var;
    printf("Enter a var.\n");
    scanf("%d", &var);

    switch (var)
    {
    case 1:
    {
        printf("Good.\n");
        break;
    }
    case 2:
    {
        printf("Better.\n");
        break;
    }
    case 3:
    {
        printf("Best.");
        break;
    }
    default:
    {
        printf("Invalid.");
        break;
    }
    }
    return 0;
}