#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*      sizeof oparator in c

   it is used because different machine has built in different architecture that and it has different size for different formate like int , float, char
   
   printf("The size of int on my pc is %d \n",sizeof(int));
    printf("The size of float on my pc is %d \n",sizeof(float));
    printf("The size of double on my pc is %d \n",sizeof(double));
    printf("The size of char on my pc is %d \n",sizeof(char));*/


    int *ptr;
    // ptr = malloc(6 * 4);//4 is the size of int in the matchine and 4 is for 4 integers
    ptr = (int*)malloc(6* sizeof(int));// malloc return as void so we have to type cast it for expected result
    for (int i=0; i<6;i++)
    {
        printf("Enter the value of %d element : ",i+1);
        scanf("%d",&ptr[i]);
        
    }
    for (int i=0; i<6;i++)
    {
        printf("The value of  %d element is : %d\n",i+1,ptr[i]);

    }

    return 0;
}