#include <stdio.h>

/* 1.
int main()
{
    int a;
    printf("Enter 3 digit number\n");
    scanf("%d", &a);
    int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }

    printf("The sum is %d.", sum);
}*/

/*2.code to find the ascii code of '+'
int main()
{
    char ch = '+';
    printf("The ascii code of %c is %d", ch, ch);
}
    */
/*3. code to print size of an int, float, char, and a double type var.
int main()
{
    int a;
    char ch;
    float f;
    double d;
    printf("The size of %d is %d\n", a, sizeof(a));
    printf("The size of %c is %d\n", ch, sizeof(ch));
    printf("The size of %f is %d\n", f, sizeof(f));
    printf("The size of %lf is %d\n", d, sizeof(d));
}*/
/*4.*/
// int main()
// {
//     int a;
//     printf("Enter a number\n");
//     scanf("%d", &a);
//     a = (a / 10) * 10;
//     printf("New a = %d\n", a);
// }

/*5
int main()
{
    int a, d;
    printf("Enter a number and a digit\n");
    scanf("%d %d", &a, &d);
    a = a * 10 + d;
    printf("New a = %d\n", a);
}*/