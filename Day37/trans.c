/*
Q74: Find the transpose of a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
    printf("The transpose of the matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}