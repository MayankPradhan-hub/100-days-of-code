/*
Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include<stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

void readStudent(struct Student *p)
{
    printf("Name: ");
    scanf("%s",p->name);
    printf("Roll: ");
    scanf("%d",&p->roll_no);
    printf("Marks: ");
    scanf("%d",&p->marks);
}

void printStudent(struct Student *p)
{
    printf("Name: %s | Roll: %d | Marks: %d\n",p->name,p->roll_no,p->marks);
}

int main()
{
    struct Student s;
    readStudent(&s);
    printStudent(&s);
    return 0;
}