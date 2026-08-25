/*Q31: Write a program to take a number as input and print its equivalent binary representation.
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int bi;
    while(num>1)
    {
        bi=bi*10+(num%2);
        num=num/2;
    }
    printf("%d",bi);
    return 0;
}