#include<stdio.h>

 int main() {
    // factorial of 4 = 1*2*3*4
    // factorial of 6 = 1*2*3*4*5*6
    
     int i=0, n=7, factorial=1;
     for(i=1;i<=n;i++)
     {
        factorial *=i;
     }
     printf("The value of factprial %d is %d",n,factorial);
    return 0;
}