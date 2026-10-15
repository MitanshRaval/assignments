#include <stdio.h>

int main()
{
    int dailySteps[7] = {5000, 6200, 7100, 4500, 8000, 9000, 6500};

    for (int i = 0; i < 7; i++)
    {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}

