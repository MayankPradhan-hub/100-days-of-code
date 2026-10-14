/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.


Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>
int maxSubArraySum(int arr[], int size) 
{
    int maxsofar = arr[0];
    int currmax = arr[0];

    for (int i = 1; i < size; i++) {
        currmax = (arr[i] > currmax + arr[i]) ? arr[i] : currmax + arr[i];
        maxsofar = (maxsofar > currmax) ? maxsofar : currmax;
    }
    return maxsofar;
}
int main() 
{
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, size);
    printf("%d\n", max_sum);
    return 0;
}