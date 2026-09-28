/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char date[11];
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    char month_str[4];
    if (strcmp(month, "01") == 0) {
        strcpy(month_str, "Jan");
    } else if (strcmp(month, "02") == 0) {
        strcpy(month_str, "Feb");
    } else if (strcmp(month, "03") == 0) {
        strcpy(month_str, "Mar");
    } else if (strcmp(month, "04") == 0) {
        strcpy(month_str, "Apr");
    } else if (strcmp(month, "05") == 0) {
        strcpy(month_str, "May");
    } else if (strcmp(month, "06") == 0) {
        strcpy(month_str, "Jun");
    } else if (strcmp(month, "07") == 0) {
        strcpy(month_str, "Jul");
    } else if (strcmp(month, "08") == 0) {
        strcpy(month_str, "Aug");
    } else if (strcmp(month, "09") == 0) {
        strcpy(month_str, "Sep");
    } else if (strcmp(month, "10") == 0) {
        strcpy(month_str, "Oct");
    } else if (strcmp(month, "11") == 0) {
        strcpy(month_str, "Nov");
    } else if (strcmp(month, "12") == 0) {
        strcpy(month_str, "Dec");
    }

    printf("%s-%s-%s\n", day, month_str, year);
}