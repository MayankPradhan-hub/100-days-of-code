/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the first side\n");
    scanf("%d",&a);
    printf("Enter the second side\n");
    scanf("%d",&b);
    printf("Enter the third side\n");
    scanf("%d",&c);
    if(
        ((a+b)>c)&&((a+c)>b)&&((b+c)>a)
    )
    {
        if(
            ((a*a)+(b*b)==(c*c))||(((a*a)+(c*c)==(b*b)))||(((b*b)+(c*c)==(a*a)))
        )
        {
            printf("The triangle is right angled\n");
        }
        else 
        {
            if((a==b)&&(a==c))
            {
                printf("The triangle is equilateral\n");
            }
            else if((a==b)||(a==c)||(b==c))
            {
                printf("The triangle is isosceles\n");
            }
            else
            {
                printf("The triangle is scalene\n");
            }
        }
    }
    else
    {
        printf("The triangle is not valid\n");
    }
    return 0;
}