#include<stdio.h>

 int main() {
     int principal=100 , rate=4 , year=1;
     int simpleinterest = (principal * rate * year)/100;

     printf("The value of simple interest is>> %d",simpleinterest);
    return 0;
}