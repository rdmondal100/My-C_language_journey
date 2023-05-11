#include<stdio.h>

 int main() {
     int arr[10];
     int n;
     printf("Enter the desired table number you want : >>> ");
     
     scanf("%d",&n);
     for(int i=0;i<10;i++)
     {
        arr[i]= n*(i+1);
     }


     for(int i=0;i<10;i++)
     {
        printf("%d x %d = %d\n",n,i+1,arr[i]);
     }
    return 0;
}