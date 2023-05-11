#include<stdio.h>
#include<stdlib.h>

 int main() {
     int *arr;

     int n;
     printf("Enter the size of array : ");
     scanf("%d",&n);
     arr= (int*)calloc(n,sizeof(int));

     for(int i=0;i<n;i++)
     {
        printf("Enter the value of %d element : ",i+1);
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<n;i++)
     {
        printf("The %d element is %d\n",i+1,arr[i]);
     }
    return 0;
}