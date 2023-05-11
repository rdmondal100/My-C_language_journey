#include<stdio.h>

int main() {
    int a, b, c, d, max = 0;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    printf("Enter the fourth number:");
    scanf("%d",&d);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("The greatest number is: %d", max);

    return 0;
}
