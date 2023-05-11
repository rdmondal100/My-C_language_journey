#include<stdio.h>

 int main() {
     int n=5,prime=1,i=2;

     do{
        if(n%i==0 )
        {
            prime=0;
            break;

        }
        i++;

     }
     while(  i<n && i!=2);

     if ( prime==0 && i!=2 )
     {
            printf("This is not a prime number");
      
     }
     
     else{
            printf("This is  a prime number");

     }
    return 0;
}