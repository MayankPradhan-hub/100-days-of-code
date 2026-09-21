/*
Q86: Check if a string is a palindrome.


Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);
    for (int j = 0; str[j] != '\0'; j++)
    {
        if (str[j] >= 'A' && str[j] <= 'Z')
            str[j] = str[j] + 32;
    }
    int i,l=strlen(str)-1,flag=0;
    if (str[l] == '\n')
    {
        str[l] = '\0';
        l--;
    }
    for(i=0;i<strlen(str)/2;i++)
    {
        if(str[i]!=str[l])
        {
            flag=1;
            break;
        }
        l--;
    }
    if(flag==1)
    {
        printf("Not palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }
    return 0;
}