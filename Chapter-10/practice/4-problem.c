#include <stdio.h>

int main() {
    FILE *f1;
    f1 = fopen("employee.txt", "w");

    int num_employees;
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    char name[50];
    int salary;

    for (int i = 0; i < num_employees; i++) {
        printf("Enter the name of the employee number- %d: \n", i+1);
        // scanf("%s", name);// this can't take the blank space 
        scanf(" %[^\n]s", name); // this can take  black space
        // fgets(name, 50, stdin);
        // gets(name);       
        //  fflush(stdin);




        printf("Enter the   salary of employee number- %d: \n", i+1);
        scanf(" %d", &salary);
        fprintf(f1, "%s, %d\n", name, salary);
    }

    fclose(f1);
    return 0;
}
