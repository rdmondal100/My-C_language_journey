#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int snwatgun(char you, char comp)
{
    // return 1 if you won , -1 if you lose, 0 if you drow

    // drow
    if (you == comp)
    {
        return 0;
    }

    // non drow >> snake water
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    // non drow >> snake gan

    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    // non drow >>  water gun

    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 's' && comp == 'w')

    {
        return -1;
    }
}
int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand()%100+1;

    printf("The number is %d \n",number);

    //computer choice

    if(number<33)
    {
        comp='s';
    }
    else if(number>33 && number<66)
    {
        comp='w';
    }
    else if(number>66 )
    {
        comp='g';
    }
    printf("Enter 's' for snake ,'w' for water and 'g' for gun >>> ");
    scanf("%c", &you);
   
    int result = snwatgun(you, comp);
    printf("You chose %c and computer cose %c \n", you, comp);

    if (result == 0)
    {
        printf("Game drow");
    }
    else if (result == 1)
    {
        printf("You won");
    }
    else if (result == -1)
    {
        printf("You loss");
    }
    else if (you!='s' || you!='g' || you!='w' )
    {
        printf("Your choice is in vadid");
       
    }

    return 0;
}