#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;

    printf("The value of a+b is : %d \n", a + b);
    printf("The value of a-b is : %d \n", a - b);
    printf("The value of a*b is : %d \n", a * b);
    printf("The value of a/b is : %f \n", (float)a / b);

    int z;
    z = b * a; // legal
               //  b * a = z ; // illegal
    printf("The value of z is : %d \n", z);

    printf("5 when divided by 2 leaves a remainder of: %d \n", 5 % 2);
    printf("5 when divided by 2 leaves a remainder of: %d \n", -5 % 2);
    printf("5 when divided by 2 leaves a remainder of: %d \n", 5 % -2);

    //  No operator is assumed to be present

    //  printf("The value of a*b is : %d \n", a.b); >> wrong

    printf("The value of a*b is : %d \n", a * b); // right

    //  There is no operator to perform exponentiation in c

    printf("The value of 4^5 is : %d \n", 4 ^ 5); // Will not return 4 to the power 5

    printf("The value of (4^5) 4 to the power is : %f \n", pow(4, 5));

    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6.1 + 5.9 is %f\n", 6.1 + 55.9);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);


    
    // int k = (float)3.0 / 9;
    float k = 3.0/9  ;





    printf("The value of k is: %f\n", k);

    return 0;
}