#include<stdio.h>

 int main() {
//      int a;
//    int b=a;
//    int v = 3^3;
//    char dt= '2';
//    float d = (3.0/8-2);

//    printf("%d\n",v);
//    printf("%f",d);






// Q3. Write a program to determine whether a number is divisible by 97 or not


int num;

printf("enter the number >>:\n");
scanf("%d",&num);
printf("Divisibility test return : %d\n",num%97);


// Q4. Step by step evaluation of 3*x/y-z+k
int x = 2, y = 3, z = 2 , k = 1;
//3*2/3-2+1
//6/3-2+1
//2-2+1
//0+1
//1
printf("Solution of (3*x/y-z+k) this equation is:%d\n",3*x/y-z+k);


    return 0;
}