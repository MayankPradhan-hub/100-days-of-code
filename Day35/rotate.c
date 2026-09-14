/*
Q70: Rotate an array to the right by k positions.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main()
{
    int n, k, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n; // Handle cases where k is greater than n
    int rotated[n];
    for (i = 0; i < n; i++)
    {
        rotated[(i + k) % n] = arr[i];
    }
    printf("The rotated array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}