#include <stdio.h>
#include <string.h>

int main()
{
    char team[50];

    printf("Enter your favorite IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "Mi") == 0)
    {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "Csk") == 0)
    {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "rcb") == 0)
    {
        printf("Go Royal Challengers Bengaluru!\n");
    }
    else if (strcmp(team, "kkr") == 0)
    {
        printf("Go Kolkata Knight Riders!\n");
    }
    else if (strcmp(team, "srh") == 0)
    {
        printf("Go Sunrisers Hyderabad!\n");
    }
    else
    {
        printf("Team not found!\n");
    }

    return 0;
}