/*
Q72: Find the sum of all elements in a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
}