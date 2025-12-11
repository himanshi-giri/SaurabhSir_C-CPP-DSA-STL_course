#include <stdio.h>

// int main()
// {
//     char str[20];
//     printf("Enter the string \n");
//     gets(str);
//     int i;
//     for (i = 0; str[i]; i++)
//         ;
//     printf("The length of a string is %d", i);
// }

// int main()
// {
//     char str[20];
//     printf("Enter the string \n");
//     gets(str);
//     int i, count = 0;
//     char ch;
//     printf("Enter a char : ");
//     scanf("%c", &ch);
//     for (i = 0; str[i]; i++)
//     {
//         if (str[i] == ch)
//             count++;
//         // printf("%d", count);
//     }
//     // printf("hii");
//     printf("TThe occurence of %c is %d", ch, count);
// }

// int main()
// {
//     char str[20];
//     printf("Enter the string \n");
//     gets(str);
//     int i, count = 0;
//     char ch;
//     // printf("Enter a char : ");
//     // scanf("%c", ch);
//     for (i = 0; str[i]; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//             count++;

//     }
//     printf("TThe occurence of %c is %d", ch, count);
// }

int main()
{
    char str[20];
    printf("Enter the string \n");
    gets(str);
    int i, count = 0;
    char ch;
    // printf("Enter a char : ");
    // scanf("%c", ch);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    printf("TThe occurence of %c is %d", ch, count);
}