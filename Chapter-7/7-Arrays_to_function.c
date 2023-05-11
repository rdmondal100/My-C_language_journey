#include <stdio.h>
void printarray(int *ptr, int n);
int main()
{
    int arr[] = {1, 2, 3543, 34, 3, 634, 23};
    printarray(arr, 7);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    return 0;
}

/*
void printarray(int *ptr, int n)
{

    for(int i=0;i<n; i++)
    {
        printf("The value of element %d is %d \n",i+1,*(ptr+i));
    }
}
*/
void printarray(int ptr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n", i + 1, *(ptr + i));
    }
    ptr[2] = 555;//This value will be changes in arr array in main function as well
}