/*
Q43: Write a program to check if a number is a strong number.
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int t=num,i,f,r,sum=0;
    while(t>0)
    {
        r=t%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        t=t/10;
    }
    if(num==sum)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not Strong number\n");
    }
    return 0;
}