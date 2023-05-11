#include<stdio.h>

 int main() {
     
     char *ptr ="Harry  bhai";  // but in this case i can re inisialised the arry
    //  char ptr[] ="Harry  bhai";   // these two are same but while i use this i can not re inisialised the array
     ptr = "Shubham bhai";
     printf("%s",ptr);

    return 0;
}
