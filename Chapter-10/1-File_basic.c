#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.text","r"); // ---> for reading the file 
    ptr = fopen("sample2.text","w");// ---> for writing the file 


    return 0;
}