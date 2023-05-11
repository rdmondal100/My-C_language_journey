#include<stdio.h>


void display(); // Function prototype


 int main() {   
     int a;
     printf("Initializing display\n");
     

     display (); // Function call

     printf(" display function finished its works\n");
    return 0;
}


// Function defination

void display()
{
    printf("this is display\n");
}