/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.


Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
#include<string.h>
enum menu{ADD,SUBTRACT,MULTIPLY};

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

int calculate(int ch,int *p,int *q)
{
    int r=0;
    switch(ch)
    {
        case ADD:
            r=*p+*q;
            break;
        case SUBTRACT:
            r=*p-*q;
            break;
        case MULTIPLY:
            r=*p**q;
            break;
    }
    return r;
}

int main()
{
    char s[20],name[3][10]={"ADD","SUBTRACT","MULTIPLY"};
    int a,b,ch;
    printf("Enter the operation and two numbers\n");
    scanf("%s%d%d",s,&a,&b);
    ch=find(s,name);
    if(ch==-1)
    {
        printf("Invalid operation\n");
        return 0;
    }
    printf("%d\n",calculate(ch,&a,&b));
    return 0;
}