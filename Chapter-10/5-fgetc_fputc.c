#include<stdio.h>

 int main() {
     FILE  *ptr;
     // fgetc demo for reading a file 
    //  ptr =fopen("get_demo.txt","r" );
    //  char c = fgetc(ptr);
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));
    //  printf("The value of my is %c \n",fgetc(ptr));



         ptr =fopen("putc_demo.txt","w" );
         putc('c',ptr);
         putc('c',ptr);
         putc('c',ptr);
         fclose(ptr);
         



    return 0;
}