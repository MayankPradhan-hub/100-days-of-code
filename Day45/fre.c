/*
Q89: Count frequency of a given character in a string.


Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    int i,c=0;
    char ch;
    printf("Enter the character to be searched for\n");
    scanf("%c",&ch);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==ch)
        {
            c++;
        }
    }
    printf("The character '%c' has a frequency of %d in the string\n",ch,c);
    return 0;
}