/*Q28: Write a program to print the product of even numbers from 1 to n.
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    int i,pro=1;
    for(i=2;i<=n;i=i+2)
    {
        pro=pro*i;
    }
    printf("%d ",pro);
    i=2;
    printf("(%d",i);
    if(n>=4)
    {
         for(i=4;i<=n;i=i+2)
        {
            printf("*%d",i);
        }
    }
    printf(")");
    return 0;
}