#include <stdio.h>

void printTable(int multable[][10], int num, int n);

int main()
{
    int number_of_rows, number_of_columns;
    int multable[10][10];
    int n, num;
    
    printf("Enter how many rows you want >> ");
    scanf("%d", &number_of_rows);
    
    printf("Enter how many columns you want >> ");
    scanf("%d", &number_of_columns);
    
    printf("Enter how much you want to print >> ");
    scanf("%d", &n);
    
    printf("Enter which table you want to print >> ");
    scanf("%d", &num);

    printTable(multable, num, n);

    return 0;
}

void printTable(int multable[][10], int num, int n)
{
    printf("The multiplication table of %d is:\n", num);
    for (int i = 0; i < n; i++)
    {
        multable[0][i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, multable[0][i]);
    }
}
