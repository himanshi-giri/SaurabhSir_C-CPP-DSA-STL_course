#include <stdio.h>

/* 1.
int main()
{
    int a;
    scanf("%d", &a);
    if (a>99 && a<1000)
        printf(" a 3 digit no.");
    else
        printf("not a 3 digit number\n");
}
        */
/* 2. Prog to print greater between two numbers.Print one if both are same.
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d", a);
    else
        printf("%d", b);

}
*/
/* 3.
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = b * b - 4 * a * c;
    if (d > 0)
        printf("The roots are real and unequal");
    else if (d < 0)
        printf("The roots are imaginary");
    else if (d == 0)
        printf("The roots are real and equal");
}
        */
/*4. wap to check whether a given year is a leap or not.
int main()
{
    int yr;
    scanf("%d", &yr);
    if (yr % 4 == 0)
    {
        if (yr % 100 == 0)
            if (yr % 400 == 0)
            {
                printf("Leap");
            }
            else
            {
                printf("No-leap");
            }
        printf("Leap");
    }
    else
    {
        printf("No-leap");
    }
}
*/
/*5. wap to find greatest among three given numbers. print number once if the greatest number appears two or three times*/
int main()
{
    int a = 1, b = 3, c = 2;
    // int greatest;
    // if ((a >= b) && (a >= c))
    // {
    //     greatest = a;
    // }
    // else if (b >= c)
    // {
    //     greatest = b;
    // }
    // else if ((c >= a) && (c >= b))
    // {
    //     greatest = c;
    // }
    // printf("%d\n", greatest);

    if (a > b)
        if (a > c)
            printf("%d", a);
        else
            printf("%d", c);
    else if (b > c)
        printf("%d", b);
    else
        printf("%d", c);

    printf("\n");
}