/*Q27: Write a program to print the sum of the first n odd numbers.
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    int i,j=1,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+j;
        j=j+2;
    }
    printf("The sum of odd numbers till %d is: %d\n",n,sum);
    return 0;
}