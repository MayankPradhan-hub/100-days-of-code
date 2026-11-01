/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.


Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include<stdio.h>
void store(char name[][30],int *r,int *m,int n)
{
    int i;
    FILE *fp;
    fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("File cannot be opened\n");
        return;
    }
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%s %d %d\n",name[i],*(r+i),*(m+i));
    }
    fclose(fp);
}

void display(int n)
{
    int i,roll,marks;
    char name[30];
    FILE *fp;
    fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("File cannot be opened\n");
        return;
    }
    printf("The student records are:\n");
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%s%d%d",name,&roll,&marks);
        printf("Name: %s | Roll: %d | Marks: %d\n",name,roll,marks);
    }
    fclose(fp);
}

int main()
{
    char name[50][30];
    int roll[50],marks[50],n,i;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name, roll number and marks of student %d\n",i+1);
        scanf("%s%d%d",name[i],&roll[i],&marks[i]);
    }
    store(name,roll,marks,n);
    display(n);
    return 0;
}