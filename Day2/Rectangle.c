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