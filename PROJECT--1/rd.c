#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int main() {
     int number, guess, n=1 ;

 srand(time(0));
 number = rand()%100+1;
 printf("The number is >> %d",number);
  

 do{
  printf("guess the numer between 1 to 100 >>");
    scanf("%d",&guess);

    if (guess>number)
    {
        printf("lower number please\n");

    }
    else if(guess<number)
    {
        printf("high number please\n");

    }
    else{
        printf("you guess the number in %d atempt",n);
    }
    n++;


 }
 while(number!=guess);

    return 0;
}