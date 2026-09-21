/*
Q85: Reverse a string.


Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    for (j = 0; str[j] != '\0'; j++);
    for (i = j - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}