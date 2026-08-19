/*Q17: Write a program to find the roots of a quadratic equation and categorize them.
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the cofficients like this: a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    float D=b*b-4*a*c;
    if(D>0)
    {
        printf("Roots are real and different: %0.3f, %0.3f\n",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
    }
    else if(D==0)
    {
        printf("Roots are real and same: %0.3f\n",-b/(float)(2*a));
    }
    else
    {
        printf("Roots are complex\n");
    }
    return 0;
}