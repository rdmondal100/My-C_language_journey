#include<stdio.h>

int factorial(int x);
 int main() {
     
     int n;
     printf("Enter the value  : ");
     scanf("%d",&n);

     printf("The value of factorial %d is %d",n,factorial(n));
    return 0;
}
int factorial(int x)
{
printf("Calling factorial %d\n",x);
    if(x==1 || x==0)
    {
        return 1;
    }
    else {
        int f1 =factorial(x-1);
        int f = f1*x;
        
        return f;
        // return x * factorial(x-1);

    }
}