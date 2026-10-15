#include <stdio.h>

int main()
{
    int playlistRatings[3][5] =
    {
        {5, 4, 5, 3, 4},
        {4, 5, 5, 4, 5},
        {3, 4, 4, 5, 3}
    };

    printf("Ratings of second playlist:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Day %d: %d\n", i + 1, playlistRatings[1][i]);
    }

    return 0;
}
