#include<stdio.h>

int main() {
    int i = 0;
    int n;

    printf("How many numbers do you want to print>>>\n ");
    scanf("%d", &n);

    while (i < n) {
        printf("Output: %d\n", i+1);
        i++;
    }

    return 0;
}
