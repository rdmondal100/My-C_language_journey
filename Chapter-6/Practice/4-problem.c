#include<stdio.h>
void sumavg(int a, int b, int *sum, float *avg);
 int main() {
     int i,j,sum;
     float avg;
     i =3;
     j=6;
     sumavg(i, j, &sum, &avg);
     printf("The value of sum is %d\n",sum);
    printf("The value of avg is %.2f",avg);
    return 0;
}
void sumavg(int a, int b ,int *sum, float *avg)
{
     *sum = a + b ;
     *avg =(float) (*sum)/2;
    

}