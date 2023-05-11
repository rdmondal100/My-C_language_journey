#include<stdio.h>
#include<stdlib.h>

 int main() {
     int *arr;
     arr= (int*)calloc(6,sizeof(int));
     for(int i=0;i<6;i++)
     {
        printf("Enter the %d element : \n",i+1);
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<6;i++)
     {
        printf("The %d element is>>  %d \n",i+1,arr[i]);
     }

    return 0;
}