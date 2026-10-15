#include <stdio.h>

char* formatPrice(int price)
{
    static char result[30];

    if (price >= 10000)
    {
        sprintf(result, "₹%d,%03d", price / 1000, price % 1000);
    }
    else if (price >= 1000)
    {
        sprintf(result, "₹%d,%03d", price / 1000, price % 1000);
    }
    else
    {
        sprintf(result, "₹%d", price);
    }

    return result;
}

int main()
{
    printf("Laptop: %s\n", formatPrice(55999));
    printf("Headphones: %s\n", formatPrice(1599));
    printf("Mouse: %s\n", formatPrice(799));

    return 0;
}
