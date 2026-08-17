/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character
*/
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a aplhabet, digit or a specicial character\n");
    scanf("%c",&c);
    if(c>=65&&c<=90)
    {
        printf("Uppercase alphabet\n");
    }
    else if(c>=97&&c<=122)
    {
        printf("Lowercase alphabet\n");
    }
    else if(c>=48&&c<=57)
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
    return 0;
}