/*
Q39: Write a program to find the product of odd digits of a number.
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int pro=1,r;
    while(num>0)
    {
        r=num%10;
        if(r%2!=0)
        {
            pro=pro*r;
        }
        num=num/10;
    }
    printf("The product is: %d",pro);
    return 0;
}