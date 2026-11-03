/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.


Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char color[20];

    printf("Enter traffic light: ");

    scanf("%s", color);

    enum TrafficLight light;

    if (strcmp(color, "RED") == 0)
    {
        light = RED;
    }
    else if (strcmp(color, "YELLOW") == 0)
    {
        light = YELLOW;
    }
    else if (strcmp(color, "GREEN") == 0)
    {
        light = GREEN;
    }
    else
    {
        printf("Invalid color\n");
        return 1;
    }

    switch (light)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
