#include<stdio.h>

 int main() {
    FILE *ptr;
    int num;
    printf("Enter the integer you need the table of>>>   ");
    scanf("%d",&num);
    ptr = fopen("pr-2-table.txt","w");
    for (int i = 0;i<10 ;i++)
    {
        fprintf(ptr,"%d X %d = %d\n", num , i+1, num*(i+1));
    }
    fclose(ptr);
     
    return 0;
}