/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/
#include<stdio.h>
int main()
{
    float len, br;
    printf("Enter the length of rectangle\n");
    scanf("%f",&len);
    printf("Enter the breadth of rectangle\n");
    scanf("%f",&br);
    float peri,area;
    peri=2.0*(len+br);
    area=len*br;
    printf("Perimerer:%f Area:%f",peri,area);
    return 0;
}