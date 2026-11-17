/*
Q146: Create Employee structure with nested Date structure for joining date and print details.


Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include<stdio.h>

struct Date
{
    int day,month,year;
};

struct Employee
{
    char name[50];
    int id;
    struct Date doj;
};

void readEmployee(struct Employee *e)
{
    printf("Enter the name\n");
    scanf("%s",e->name);
    printf("Enter the ID\n");
    scanf("%d",&e->id);
    printf("Enter the joining date (dd mm yyyy)\n");
    scanf("%d %d %d",&e->doj.day,&e->doj.month,&e->doj.year);
}

void printEmployee(struct Employee *e)
{
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",e->name,e->id,e->doj.day,e->doj.month,e->doj.year);
}

int main()
{
    struct Employee emp;
    readEmployee(&emp);
    printEmployee(&emp);
    return 0;
}