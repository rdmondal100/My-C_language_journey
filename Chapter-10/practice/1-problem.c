#include<stdio.h>

 int main() {
     FILE *ptr;
     int a ,b , c;
     
     ptr = fopen("pr-1.txt", "r");

     fscanf(ptr, "%d %d %d", &a , &b , &c);
     printf(" the valu of  a b and c is %d, %d, %d ", a, b,c);

    return 0;
}