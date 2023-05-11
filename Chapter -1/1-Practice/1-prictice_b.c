#include<stdio.h>

 int main() {
     int length, breadth;
     int area = length*breadth;
     printf("The length of a ractangle is >>\n");
     scanf("%d",&length);
     printf("The breadth of a ractangle is >>\n");
     scanf("%d",&breadth);

     printf("The area of this ractangle is %d",breadth*length);
    return 0;
}