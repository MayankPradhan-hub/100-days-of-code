/*Q29: Write a program to calculate the factorial of a number.
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    printf("The factorial is: %d\n",f);
    return 0;
}