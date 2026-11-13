/*
Q142: Store details of 5 students in an array of structures and print all.


Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include<stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

void readStudents(struct Student *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter details of student %d (Name, Roll, Marks)\n",i+1);
        scanf("%s %d %d",(p+i)->name,&(p+i)->roll_no,&(p+i)->marks);
    }
}

void printStudents(struct Student *p,int n)
{
    int i;
    printf("\n%-15s %-10s %-10s\n","Name","Roll","Marks");
    for(i=0;i<n;i++)
    {
        printf("%-15s %-10d %-10d\n",(p+i)->name,(p+i)->roll_no,(p+i)->marks);
    }
}

int main()
{
    struct Student s[5];
    readStudents(s,5);
    printStudents(s,5);
    return 0;
}