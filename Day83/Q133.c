/*
Q133: Create an enum for months and print how many days each month has.


Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include<stdio.h>
#include<string.h>
enum month{JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};

int find(char *s,char name[][5])
{
    int i;
    for(i=0;i<12;i++)
    {
        if(strcmp(s,name[i])==0)
        {
            return i;
        }
    }
    return -1;
}

void display(int m)
{
    switch(m)
    {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
    }
}

int main()
{
    char s[10],name[12][5]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    int m;
    printf("Enter the month (JAN to DEC)\n");
    scanf("%s",s);
    m=find(s,name);
    if(m==-1)
    {
        printf("Invalid month\n");
        return 0;
    }
    display(m);
    return 0;
}