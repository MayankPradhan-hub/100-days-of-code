/*
Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main()
{
    int num,i,factors=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            factors++;
        }
    }
    if(factors==2)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }
    return 0;
}