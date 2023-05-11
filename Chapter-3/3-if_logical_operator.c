#include<stdio.h>

 int main() {
    
     int age;

     int vippass=0;

    //  vippass=1;

     printf("Enter your age>>");
     scanf("%d",&age);


    //  if(age!=90)
     if((age<=70 && age>=18)  /* ||(vippass==1)*/)
     {
        printf("you can drive \n");
     }

else{
    printf("You can't drive \n");
}

     if(age==50)
     {
        printf("Half century \n");
     }


    return 0;
}
    