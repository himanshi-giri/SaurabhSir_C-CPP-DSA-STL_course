#include <stdio.h>

// 1. calculate avg of 3 numbers
int main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    int avg = (a + b + c) / 3;
    printf("The avg. of three numbers is : %d", avg);

    return 0;
}