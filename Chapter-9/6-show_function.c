#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
    char nam[20];
};
void show(struct employee emp)
{
    printf("The code of employee is : %d\n ", emp.code);
    printf("The  sallary employee is : %f\n ", emp.salary);
    printf("The Name of employee is : %s\n ", emp.name);
    emp.code = 34;
}

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code= 101; or you can also write---   ptr->code=101;

    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "riday");
    show(e1);
    printf("The code of employee is : %d\n ", e1.code); // hare the value of code is not changed because the copy of structure has passed to the function.

    return 0;
}