#include<stdio.h>
int check(char *s, char c)
{
char *ptr = s;
int a;

while (*ptr != '\0')
{
   if (*ptr==c)
{
     a=c;
    printf("Yes");
}
    ptr++;


   
}
if(  a!=c)
{
    printf("NO");

}






}
 int main() {
     char st[]="Riday Mondal";
     char c;
     printf("Enter the cherecter ");
     scanf("%c",&c);
     check(st,c);
    return 0;
}