#include <stdio.h>

void capitalizeFirstLetter(char text[])
{
    if (text[0] >= 'a' && text[0] <= 'z')
    {
        text[0] = text[0] - 32;
    }
}

int main()
{
    char product[] = "iphone";
    char username[] = "mitansh";

    capitalizeFirstLetter(product);
    capitalizeFirstLetter(username);

    printf("Product: %s\n", product);
    printf("Username: %s\n", username);

    return 0;
}

