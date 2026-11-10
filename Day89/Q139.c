/*
Q139: Show that enums store integers by printing assigned values.


Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include<stdio.h>
enum status{SUCCESS,FAILURE,TIMEOUT};

int main()
{
    enum status s;
    int a;
    s=FAILURE;
    a=s;
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",SUCCESS,FAILURE,TIMEOUT);
    printf("Size of enum: %d bytes\n",(int)sizeof(s));
    printf("Value of s stored in an int: %d\n",a);
    return 0;
}