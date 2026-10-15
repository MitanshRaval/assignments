#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char username[6];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    if (strlen(name) < 5)
    {
        strcpy(username, name);
    }
    else
    {
        strncpy(username, name, 5);
        username[5] = '\0';
    }

    printf("Generated username: %s\n", username);

    return 0;
}

