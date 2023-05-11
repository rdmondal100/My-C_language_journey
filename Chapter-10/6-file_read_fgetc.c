#include<stdio.h>

 int main() {
     FILE *ptr;
     char c;
     
     ptr = fopen("getcdemo.txt", " r");
     c = fgetc(ptr);

     while(c!=EOF)
     {
        printf ("%c", fgetc(ptr));
             c = fgetc(ptr);

    
     }
     
    return 0;
}