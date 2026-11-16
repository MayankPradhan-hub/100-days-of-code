/*
Q145: Return a structure containing top student's details from a function.


Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    int marks;
};

struct student topStudent(struct student *p,int n)
{
    int i,max;
    max=0;
    for(i=1;i<n;i++)
    {
        if((p+i)->marks>(p+max)->marks)
        {
            max=i;
        }
    }
    return *(p+max);
}

int main()
{
    struct student s[50],top;
    int n,i;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name, roll and marks\n");
        scanf("%s %d %d",(s+i)->name,&(s+i)->roll,&(s+i)->marks);
    }
    top=topStudent(s,n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n",top.name,top.roll,top.marks);
    return 0;
}