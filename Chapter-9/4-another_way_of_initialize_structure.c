#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
    char nam[20];

};
 int main() {
struct employee Harry={100, 34.143, "Harry", "rd"};

   
   printf("code is : %d \n ",Harry.code );
      printf(" %u \n ",&Harry.code );

   printf("Salary is : %f \n ",Harry.salary );
   printf(" %u \n ",&Harry.salary );
   printf("Name is : %s \n ",Harry.name );
   printf(" %u \n ",&Harry.name );
   
   printf("Name is : %s \n ",Harry.nam );
   printf(" %u \n ",&Harry.nam );
   
  
     
    return 0;
}