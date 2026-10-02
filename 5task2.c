#include <stdio.h>
#include <string.h>

int main()
{
    char meal[20];

    printf("Enter meal time: ");
    scanf("%s", meal);

    if (strcmp(meal, "breakfast") == 0)
    {
        printf("Try some Masala Dosa!\n");
    }
    else if (strcmp(meal, "lunch") == 0)
    {
        printf("Try some Biryani!\n");
    }
    else if (strcmp(meal, "dinner") == 0)
    {
        printf("Try some Paneer Butter Masala!\n");
    }
    else if (strcmp(meal, "snack") == 0)
    {
        printf("Try some Samosa!\n");
    }
    else
    {
        printf("Try some fruits!\n");
    }

    return 0;
}