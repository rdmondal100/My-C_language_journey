#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
 int main() {
     int a=34;
     char b='g';
     float d=233.44;

    //  employee e1;
    //  e1.salary = 233.33; >>>>>   won't work without employee structure
struct  employee e1;
e1.code = 100;
e1.salary = 34.4343;
// e1.name= " harry" >>>> wont work
strcpy(e1.name, "harry");
printf("%d", e1.code);

    return 0;
}