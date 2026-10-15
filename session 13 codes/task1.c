#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "w");

    fprintf(file, "Perfect\n");
    fprintf(file, "Tum Hi Ho\n");
    fprintf(file, "Love Story\n");

    fclose(file);

    printf("Songs written successfully!");

    return 0;
}


