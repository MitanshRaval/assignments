#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char song[100];
    char lowerSong[100];
    int i;

    file = fopen("playlist.txt", "r");

    while (fgets(song, sizeof(song), file) != NULL)
    {
        for (i = 0; song[i] != '\0'; i++)
        {
            if (song[i] >= 'A' && song[i] <= 'Z')
            {
                lowerSong[i] = song[i] + 32;
            }
            else
            {
                lowerSong[i] = song[i];
            }
        }

        lowerSong[i] = '\0';

        if (strstr(lowerSong, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}                              