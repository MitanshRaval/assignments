#include <stdio.h>

int main()
{
    FILE *file;
    char song[100];

    file = fopen("playlist.txt", "r");

    while (fgets(song, sizeof(song), file) != NULL)
    {
        printf("%s", song);
    }

    fclose(file);

    return 0;
}
