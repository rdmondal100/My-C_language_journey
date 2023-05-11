#include <stdio.h>
#include <string.h>
typedef struct employee// hare typedef help to replace the struct employee with emp that mention in last
{
    int code;
    float salary;
    char name[20];
    char nam[20];
}emp ;


void show(emp emp1)
{
    printf("The code of employee is : %d\n ", emp1.code);
    printf("The  sallary employee is : %f\n ", emp1.salary);
    printf("The Name of employee is : %s\n ", emp1.name);
}

int main()
{
    // Declaring e1 and ptr
    // struct employee e1;
    // struct employee *ptr;
     emp e1;
     emp *ptr;




//pointing ptr to e1
    ptr = &e1;
    // (*ptr).code= 101; or you can also write---   ptr->code=101;


    // set the member values for e1

    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "riday");
    show(e1);
   
    return 0;
}