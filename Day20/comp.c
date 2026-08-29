/*
Q40: Write a program to find the 1’s complement of a binary number and print it.
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
int main()
{
    int bi;
    printf("Enter a binary number\n");
    scanf("%d",&bi);
    int temp=bi,com=0,place=1,count=0,f=0;
    int digit,comp;
    while(temp>0)
    {
        digit=temp%10;
        if(digit==0)
        {
            comp=1;
        }
        else if(digit==1)
        {
            comp=0;
        }
        else
        {
            f=1;
            break;
        }
        com=com+comp*place;
        place*=10;
        temp/=10;
        count++;
    }
    if(f==0)
    {
        int t=com,recount=0;
        if(t==0)
        {
            recount=1;
        }
        while(t>0)
        {
            t/=10;
            recount++;
        }
        printf("Complement: ");
        int i;
        for(i=1;i<=(count-recount);i++)
        {
            printf("0");
        }
        printf("%d\n",com);
    }
    else
    {
        printf("Enter a valid binary number\n");
    }
    return 0;
}