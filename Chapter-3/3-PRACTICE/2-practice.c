#include <stdio.h>

int main()
{
    int physics, chemistry, math;
    float total;


    printf("Enter Physics Marks>>");
    scanf("%d", &physics);
    printf("Enter chemistry Marks>>");
    scanf("%d", &chemistry);
    printf("Enter Math Marks>>");
    scanf("%d", &math);
    total = (physics+ chemistry+ math)/3;

    if ((total<40) || (physics<33) || (chemistry<33) || (math<33))
    {
      printf("Your total percentage is %f and you are failed\n", total);
    }
    
    else
    {
      printf("Your total percentage is %f and you are pass\n", total);
        
    }
    

    return 0;
}