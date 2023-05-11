#include<stdio.h>
#include<stdlib.h>

 int main() {
     int *arr;
     
     arr= (int*)calloc(10,sizeof(int));
     for(int i=0;i<10;i++)
     {
        printf("7 X %d = %d\n",i+1,(7*(i+1)));
     }
    

     arr=(int*)realloc(arr,10*sizeof(int));
     printf("After reallocate\n");

      for(int i=0;i<15;i++)
     {
        printf("7 X %d = %d\n",i+1,(7*(i+1)));
     }

    return 0;
}