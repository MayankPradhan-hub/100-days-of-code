/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a letter\n");
    scanf("%c",&c);
    if(
        c=='A'||c=='a'||
        c=='E'||c=='e'||
        c=='I'||c=='i'||
        c=='O'||c=='o'||
        c=='U'||c=='u'
    )
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}