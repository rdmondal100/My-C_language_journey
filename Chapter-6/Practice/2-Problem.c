#include<stdio.h>
void adress(int i);
 int main() {
     int i=4;
     printf("The address of i is %u\n",&i);
     adress(i);
    return 0;
}
void adress(int i)

{
     printf("The address of i after function call is %u",&i);

}