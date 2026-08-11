#include<stdio.h>
#define pi 3.141592
int main()
{
    float rad,circ,ar;
    printf("Enter the radius of circle\n");
    scanf("%f",&rad);
    circ=2*pi*rad;
    ar=pi*rad*rad;
    printf("Circumference= %0.2f\n",circ);
    printf("Area= %0.2f\n",ar);
    return 0;
}