#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

    for (i; i <= 10; i++)
    {
        printf("8 X %d = %d\n", i,  8*i);

        sum+=8*i; // sum = sum + (8*i);
    }
    printf("total = %d", sum);
    return 0;
}   