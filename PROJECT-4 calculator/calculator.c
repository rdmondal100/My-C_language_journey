#include<stdio.h>

 int main() {
     float num1, num2, result;
     char op;

     printf("Enter the first number : ");
     scanf("%f",&num1);
     printf("Enter the oparator : ");
     scanf(" %c",&op);
     printf("Enter the seconf number : ");
     scanf("%f",&num2);

     switch (op)
     {
     case '+':
       result= num1+num2;
       printf("%f + %f = %f",num1,num2,result);
        break;
     case '-':
       result= num1-num2;
       printf("%f - %f = %f",num1,num2,result);
        break;
     case '*':
       result= num1*num2;
       printf("%f * %f = %f",num1,num2,result);
        break;
     case '?':
       result= num1/num2;
       printf("%f / %f = %f",num1,num2,result);
        break;
     
     default: printf("Invalid oparator");
       
     }
    return 0;
}