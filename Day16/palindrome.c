/*Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int i,num,t,r,rev=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    t=num;
    while(t>0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    if(num==rev)
    {
        printf("The number is palandrome\n");
    }
    else
    {
        printf("The number is not a palandrome\n");
    }
    return 0;
}