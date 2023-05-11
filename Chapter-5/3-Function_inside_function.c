#include <stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
   
    return 0;
}

void goodmorning()
{
    printf("Good morning Riday\n");
     goodafternoon();
    
}
void goodafternoon()
{
    printf("Good afternoon Riday\n");
    goodnight();
}
void goodnight()
{
    printf("Good night Riday\n");
}