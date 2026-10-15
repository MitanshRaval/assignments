
#include <stdio.h>

int main()
{
    int orders[5] = {250, 180, 320, 150, 400};

    int *ptr = orders;

    for (int i = 0; i < 5; i++)
    {
        printf("Order amount: %d\n", *ptr);
        printf("Memory address: %p\n\n", (void*)ptr);

        ptr++;
    }

    return 0;
}
