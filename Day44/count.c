/*
Q87: Count spaces, digits, and special characters in a string.


Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);

    int i,space=0,digit=0,special=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==32)
        {
            space++;
        }
        else if(str[i]>=49&&str[i]<=57)
        {
            digit++;
        }
        else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            continue;
        }
        else if(str[i]=='\n')
        {
            continue;
        }
        else
        {
            special++;
        }
    }
    printf("Spaces = %d,    Digits = %d,    Special = %d\n",space,digit,special);
    return 0;
}