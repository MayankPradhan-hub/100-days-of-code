/*
Q135: Assign explicit values starting from 10 and print them.


Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include<stdio.h>
enum letter{A=10,B,C};

int main()
{
    char name[3][2]={"A","B","C"};
    enum letter e;
    for(e=A;e<=C;e++)
    {
        printf("%s=%d\n",name[e-A],e);
    }
    return 0;
}