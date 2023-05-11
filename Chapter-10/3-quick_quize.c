#include<stdio.h>

 int main() {
     FILE  *ptr ;
     int num;
     int num2;
     ptr = fopen ("riday.txt","r");

     if (ptr == NULL)
     {
        printf("The file does not exist \n");
     }
     else
     {fscanf(ptr, "%d", &num);
     fscanf(ptr, "%d", &num2);
     fclose(ptr);// after reading the  file we have to close the file like this . this is a good practice 
     printf("The value of num is %d \n",num);
     printf("The value of num2 is %d",num2);
     
}
     

    return 0;
}