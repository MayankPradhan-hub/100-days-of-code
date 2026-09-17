/*
Q77: Check if the elements on the diagonal of a matrix are distinct.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and column seperated by a comma\n");
    scanf("%d,%d",&r,&c);
    int arr[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element for %d row %d coulmn number\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    
    int flag=0;
    for(i=0;i<r-1;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(arr[i][i]==arr[j][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
    return 0;
}