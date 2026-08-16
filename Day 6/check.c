/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Ennter the number\n");
    scanf("%d",&num);
    if(num!=0)
    {
        if(num>0)
        {
            printf("Positive number\n");
        }
        else
        {
            printf("Negative number\n");
        }
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}