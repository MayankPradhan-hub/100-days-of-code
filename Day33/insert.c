/*
Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main()
{
    int n, i, key, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to insert: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] > key)
            break;
    }
    for (j = n; j > i; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[i] = key;
    printf("Array after insertion: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}