/*
Q90: Toggle case of each character in a string.


Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);
    int i;
    for(i=0;i<strlen(str)-1;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]+=32;
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            str[i]-=32;
        }
    }
    printf("The toggle case is: %s\n",str);
    return 0;
}