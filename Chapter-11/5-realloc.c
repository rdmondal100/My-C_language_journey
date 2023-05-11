#include <stdio.h>
#include <stdlib.h>

int main()
{
   


    int *ptr;
    ptr = (int*)calloc(6, sizeof(int)); // calloc is like malloc , different is it's all elements  are initialized as 0
    for (int i=0; i<6;i++)
    {
        printf("Enter the value of %d element : ",i+1);
        scanf("%d",&ptr[i]);
        
    }
    for (int i=0; i<6;i++)
    {
        printf("The value of  %d element is : %d\n",i+1,ptr[i]);

    }

// Reallocate ptr using realloc()


ptr= realloc(ptr,10*sizeof(int));
    for (int i=0; i<10;i++)
    {
        printf("Enter the value of %d element : ",i+1);
        scanf("%d",&ptr[i]);
        
    }
    for (int i=0; i<10;i++)
    {
        printf("The value of  %d element is : %d\n",i+1,ptr[i]);

    }

    return 0;
}