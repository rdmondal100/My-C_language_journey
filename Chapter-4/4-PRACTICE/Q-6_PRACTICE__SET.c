#include<stdio.h>

 int main() {

    int i=0, sum=0,n;

     printf("how many number you want to add>>>>>  ");
     scanf("%d",&n);
     do{
        sum+=i;
        i++;


     }
     while(i<=n);
      printf("The value of sum (1 to 10 ) is %d",sum);
    return 0;
}