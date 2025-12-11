#include <stdio.h>
/* 1.
int main()
{
    printf("The size of A is : %d bytes", sizeof('A'));
    return 0;
}
*/

/* 2
int main()
{
    printf("The size of a real consatnt is : %d", sizeof(25));
    return 0;
}*/

/* 3
int main()
{
    char ch = 'A';
    printf("%c", ++ch);
    return 0;
}*/

/*4
int main()
{
    int a = 5;
    printf("a before = %d\n", a);
    int b = 6;
    printf("b before = %d\n", b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("a after = %d \n", a);
    printf("b after = %d\n", b);
}
*/

/*5
int main()
{
    int a = 5;
    printf("a before = %d \n", a);

    int b = 6;
    printf("b before = %d \n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a after = %d \n", a);

    printf("b after = %d \n", b);

    return 0;
}
*/

/*6.
int main()
{
    int a = 5;
    printf("a before = %d \n", a);

    int b = 6;
    printf("b before = %d \n", b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("a after = %d \n", a);

    printf("b after = %d \n", b);

    return 0;
}*/

/*7.
int main()
{
    int a = 5;
    printf("a before = %d \n", a);

    int b = 6;
    printf("b before = %d \n", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a after = %d \n", a);

    printf("b after = %d \n", b);
}
*/

/*8.
int main()
{
    int a = 3, b = 10;
    printf("%d\n", a);
    printf("%d\n", b);
    a = (a + b) - (b = a);
    printf("%d\n", a);
    printf("%d\n", b);
}*/