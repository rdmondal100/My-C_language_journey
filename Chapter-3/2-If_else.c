#include<stdio.h>

 int main() {
     int age;
     printf("Enter your age\n");
     scanf("%d",&age);


    //  if(age!=90)
     if(age>=90)
     {
        printf("Youre are above 90,you can't drive \n");
     }

else{
    printf("You can drive \n");
}

     if(age==50)
     {
        printf("Half century \n");
     }


    return 0;
}