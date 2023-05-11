#include<stdio.h>
#include <string.h>
 int main() {
     char st1[45] ="Hel";
     char *st2="Hell";

     int val = strcmp(st1,st2);
     printf("Now the st1 is %d ",val);

    return 0;
}
