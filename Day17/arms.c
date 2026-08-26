/*
Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int t=num,r,sum=0;
    while(t>0)
    {
        r=t%10;
        sum=sum+r*r*r;
        t=t/10;
    }
    if(num==sum)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    return 0;
}