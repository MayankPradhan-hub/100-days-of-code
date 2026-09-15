/*
Q73: Find the sum of each row of a matrix and store it in an array.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the rows and column of the list seprated by a comma\n");
    scanf("%d,%d",&r,&c);
    int arr[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element for %d row %d column number of list\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum[r];
    for(i=0;i<r;i++)
    {
        sum[i]=0;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i]=sum[i]+arr[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        printf("The sum of %d row is: %d\n",r,sum[i]);
    }
    return 0;
}