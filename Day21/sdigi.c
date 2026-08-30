/*
Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int r,sw=0,t=num,rev=0;
    while(t>0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    sw=num%10;
    t=(rev-(rev%10))/10;
    while(t>0)
    {
        r=t%10;
        sw=sw*10+r;
        t=t/10;
    }
    sw=sw-(sw%10);
    sw=sw+rev%10;
    printf("The result: %d\n",sw);
    return 0;
}