/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main()
{
    int i,j,t=0,k=1;
    for(i=1;i<=5;i++)
    {
        if(t==0)
        {
            for(j=1;j<=k;j++)
            {
                printf("*\n");
            }
            printf("\n");
            printf("\n");
            if(k!=5)
            {
                k=k+2;
            }
            else
            {
                t=1;
            }
        }
        else
        {
            k=k-2;
            for(j=1;j<=k;j++)
            {
                printf("*\n");
            }
            printf("\n");
            printf("\n");
        }
    }
    return 0;
}