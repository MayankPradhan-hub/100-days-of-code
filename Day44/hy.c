/*
Q88: Replace spaces with hyphens in a string.


Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==32)
        {
            str[i]='-';
        }
    }
    printf("%s",str);
    return 0;
}