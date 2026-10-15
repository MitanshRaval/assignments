#include <stdio.h>

int main()
{
    int cricketScores[3][2] =
    {
        {185, 172},
        {210, 198},
        {165, 190}
    };

    for (int i = 0; i < 3; i++)
    {
        if (cricketScores[i][0] > cricketScores[i][1])
        {
            printf("Match %d highest score: %d\n",
                   i + 1, cricketScores[i][0]);
        }
        else
        {
            printf("Match %d highest score: %d\n",
                   i + 1, cricketScores[i][1]);
        }
    }

    return 0;
}
