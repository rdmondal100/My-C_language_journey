#include<stdio.h>
int sum(int n);
 int main() {
     int x;
     printf("Enter the value : >>");
     scanf("%d",&x);
     printf("Sum of first %d number is %d",x,sum(x));

    return 0;
}
int sum(int n)
{
if(n ==0)
{
    return 0;
}
else{

int result = (sum(n-1) + n) ;
return result;
    
}
}