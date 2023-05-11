#include<stdio.h>

 int main() {
     int i = 34;
     int *j =&i;// j will now store the adress of i
     int **k = &j;

     printf("The value of I is %d\n",i);
     printf("The value of I is %d\n",*j);
     printf("The adress of I is %u\n",&i);
     printf("The adress of I is %u\n",j);
     printf("The adress of j is %u\n",&j);
     printf("The value of j is %d\n",*(&j));
     printf("The  adress of k is %u\n",&k);
     printf("The  value  of k is %d\n",&j);
     

    return 0;
}