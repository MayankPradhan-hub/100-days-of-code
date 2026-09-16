/*
Q76: Check if a matrix is symmetric.


Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the rows and column of Matrix seprated by a comma\n");
    scanf("%d,%d",&r,&c);
    if(r==c)
    {
        int M[r][c];
        int i,j,flag=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("Enter the element of %d row %d column position\n");
                scanf("%d",&M[i][j]);
            }
        }

        int T[c][r];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                T[j][i]=M[i][j];
            }
        }

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(T[i][j]==(-M[i][j]))
                {
                    continue;
                }
                else
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
    }
    else
    {
        printf("False");
    }
    return 0;
}