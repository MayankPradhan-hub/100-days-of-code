/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/
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