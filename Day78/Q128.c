/*
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.


Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
int main()
{
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    file = fopen("text.txt", "r");
    if (file == NULL)
    {
        printf("Could not open file text.txt\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}