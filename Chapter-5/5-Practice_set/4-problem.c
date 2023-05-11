#include<stdio.h>
int fibo (n);
 int main() {
     int a ;
     printf("Enter the value :");
     scanf("%d",&a);
     printf("The fibonacci number is :>>>  %d",fibo(a));
    return 0;
}

int fibo(n)
{
    if( n==1)
{
    return 0;
}
    if( n==2)
{
    return 1;
}
    
    else{
        int result = fibo(n-1) + fibo(n-2);
        return result;
    }
}