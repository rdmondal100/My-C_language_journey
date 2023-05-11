#include<stdio.h>

 int main() {
     int i=0, sum=0,n;

     printf("how many number you want to add>>>>>  ");
     scanf("%d",&n);

     while(i<=n)
     {
       sum+=i;// sum = sum+i;
        i++;
     }

    //  for(i;i<=n;i++)
    //  {
    //     sum +=i;

    //  }
   
        printf("The value of sum (1 to 10 ) is %d",sum);


    return 0;
}