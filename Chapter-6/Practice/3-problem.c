#include<stdio.h>
void change(int *a);
 int main() {
     int a =5;
     printf("The value of a is %d\n",a);
change(&a);
     printf("The value of a after change   %d",a);

    return 0;
}
void change(int *a){
int ch;
ch=*a;
*a=(*a * 10);

    
}