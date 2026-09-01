/*
Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    int i;
    double sum=0.0,t=2.0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(t/(t*2-1));
        t=t+2;
    }
    printf("The sum is %.2lf",sum);
    return 0;
}