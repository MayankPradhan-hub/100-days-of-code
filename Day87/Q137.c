/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>
#include<string.h>
enum role{ADMIN,USER,GUEST};

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

void display(int r)
{
    switch(r)
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
}

int main()
{
    char s[20],name[3][10]={"ADMIN","USER","GUEST"};
    int r;
    printf("Enter the role (ADMIN, USER or GUEST)\n");
    scanf("%s",s);
    r=find(s,name);
    if(r==-1)
    {
        printf("Invalid role\n");
        return 0;
    }
    display(r);
    return 0;
}