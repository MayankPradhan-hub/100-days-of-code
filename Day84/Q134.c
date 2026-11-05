/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.


Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>
enum status{SUCCESS,FAILURE,TIMEOUT};

int find(char *s,char name[][10])
{
    int i;
    for(i=0;i<3;i++)
    {
        if(strcmp(s,name[i])==0)
        {
            return i;
        }
    }
    return -1;
}

void display(int st)
{
    switch(st)
    {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
}

int main()
{
    char s[20],name[3][10]={"SUCCESS","FAILURE","TIMEOUT"};
    int st;
    printf("Enter the status (SUCCESS, FAILURE or TIMEOUT)\n");
    scanf("%s",s);
    st=find(s,name);
    if(st==-1)
    {
        printf("Invalid status\n");
        return 0;
    }
    display(st);
    return 0;
}