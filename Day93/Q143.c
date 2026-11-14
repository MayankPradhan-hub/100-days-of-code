/*
Q143: Find and print the student with the highest marks.


Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include<stdio.h>
typedef struct
{
    char name[30];
    int roll;
    int marks;
}student;

int topper(student *p,int n)
{
    int i,t=0;
    for(i=1;i<n;i++)
    {
        if((p+i)->marks>(p+t)->marks)
        {
            t=i;
        }
    }
    return t;
}

int main()
{
    student s[50];
    int n,i,t;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name, roll number and marks of student %d\n",i+1);
        scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
    }
    t=topper(s,n);
    printf("Topper: %s (Marks: %d)\n",s[t].name,s[t].marks);
    return 0;
}