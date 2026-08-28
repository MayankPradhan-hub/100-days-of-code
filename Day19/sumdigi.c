/*
Q38: Write a program to find the sum of digits of a number.
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int sum=0,r;
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Sum of digits are: %d\n",sum);
    return 0;
}