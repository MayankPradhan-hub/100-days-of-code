/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    char c;
    printf("Enter the two numbers and the operation seperated by a comma\n");
    scanf("%d,%d,%c",&a,&b,&c);
    switch (c)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%f",(float)a/b);
        break;
    case '%':
        printf("%d",a%b);
        break;
    case '^':
        printf("%d",(int)pow(a,b));
        break;
    default:
        printf("Enter a valid operation\n");
        break;
    }
    return 0;
}