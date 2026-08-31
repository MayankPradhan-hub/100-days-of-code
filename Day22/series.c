/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    int i;
    float sum=1.0,j=3.0;
    for(i=2;i<=n;i++)
    {
        sum=sum+(j/(j+1));
        j=j+2.0;
    }
    printf("Approximate sum: %0.1f\n",sum);
    return 0;
}