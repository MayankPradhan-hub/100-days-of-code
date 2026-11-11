/*
Q140: Define a struct with enum Gender and print person's gender.


Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include<stdio.h>
#include<string.h>
enum gender{MALE,FEMALE,OTHER};

struct person
{
    char name[30];
    enum gender g;
};

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

void display(struct person *p)
{
    switch(p->g)
    {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
}

int main()
{
    struct person p;
    char s[20],name[3][10]={"MALE","FEMALE","OTHER"};
    int x;
    printf("Enter the gender (MALE, FEMALE or OTHER)\n");
    scanf("%s",s);
    x=find(s,name);
    if(x==-1)
    {
        printf("Invalid gender\n");
        return 0;
    }
    p.g=x;
    display(&p);
    return 0;
}