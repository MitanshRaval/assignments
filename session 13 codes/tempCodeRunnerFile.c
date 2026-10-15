#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "a");

    fprintf(file, "Until I Found You\n");
    fprintf(file, "What Makes You Beautiful\n");

    fclose(file);

    printf("Two songs added successfully!");

    return 0;
}
