
#include <stdio.h>

void incrementFollowers(int *followers, int n)
{
    for (int i = 0; i < n; i++)
    {
        *followers = *followers + 100;
        followers++;
    }
}

int main()
{
    int followers[5] = {1000, 2500, 5000, 3200, 7000};

    printf("Before increment:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", followers[i]);
    }

    incrementFollowers(followers, 5);

    printf("\nAfter increment:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", followers[i]);
    }

    return 0;
}
