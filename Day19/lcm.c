/*
Q37: Write a program to find the LCM of two numbers.
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    int i,lcm;
    for(i=1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
    }
    printf("LCM is %d\n",lcm);
    return 0;
}