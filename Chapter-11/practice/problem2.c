#include<stdio.h>
#include<stdlib.h>

 int main() {
     int *arr;
     arr= (int*)malloc(6*sizeof(int));

     int n;
     printf("Enter the size of the integar: ");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
        printf("Enter the %d element : \n",i+1);
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<n;i++)
     {
        printf("The %d element is>>  %d \n",i+1,arr[i]);
     }

    return 0;
}