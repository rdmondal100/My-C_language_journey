#include <stdio.h>

int main()
{
    int a = 4;
    int q = 10;
    int e = 14;

    //    int b = 7.7; not recomended because 7.7 is not an integer

    float b = 7.7;

    char c = 'r';

    printf("The value of a is %d \n", a);
    printf("The value of q is %d \n", q);
    printf("The value of b is %f \n ", b);
    printf("The value of c is %c \n ", c);

    printf("The sum of a & q is %d \n ", a + q);
    printf("The multiplication of a & b is %f \n ", a * b);
    printf("The sum of a & q is %d \n ", e);
    return 0;
}