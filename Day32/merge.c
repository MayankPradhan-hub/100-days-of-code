/*
Q63: Merge two arrays.


Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    for (i = 0; i < n1; i++)
    {
        printf("Enter element %d of first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++)
    {
        printf("Enter element %d of second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    for (j = 0; j < n2; j++)
        printf("%d ", arr2[j]);
    return 0;
}