/*
Q78: Find the sum of main diagonal elements for a square matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the dimension fo the square matrix seperated by a comma\n");
    scanf("%d,%d",&r,&c);
    int arr[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element of %d row %d column number\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    int sum=0;
    for(i=0;i<r;i++)
    {
        sum=sum+arr[i][i];
    }
    printf("The sum of the main diagnoal of the matrix is: %d\n",sum);
    return 0;
}