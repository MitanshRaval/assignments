#include <stdio.h>

int main()
{
    char playlistName[] = "My Favorite Songs";
    int totalSongs = 25;
    float avgduration = 3.5;

    printf("My playlist \"%s\" has %d songs with an average duration of %.1f minutes.\n",
            playlistName, totalSongs, avgduration);

    return 0;
                                        
}               