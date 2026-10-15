#include <stdio.h>
#include <stdlib.h>

#define DAYS 7

// Array aur file me 7 din ke minutes log karne ka function (Task 1 & 3)
void logMinutes(int minutes[]) {
    FILE *file = fopen("music_log.txt", "w");
    if (file == NULL) {
        printf("\nFile open karne me error aayi!\n");
        return;
    }

    printf("\n--- 7 Din ke Music Listening Minutes Enter Karein ---\n");
    for (int i = 0; i < DAYS; i++) {
        printf("Day %d (minutes): ", i + 1);
        scanf("%d", &minutes[i]);
        fprintf(file, "%d\n", minutes[i]); // File me save kar rahe hain
    }

    fclose(file);
    printf("Data successfully 'music_log.txt' me save ho gaya!\n");
}

// File read karke summary calculate aur display karne ka function (Task 4)
void viewSummary() {
    FILE *file = fopen("music_log.txt", "r");
    if (file == NULL) {
        printf("\nKoi log file nahi mili! Pehle data enter karein (Option 1).\n");
        return;
    }

    int minutes[DAYS];
    int total = 0;
    int max = 0;
    int count = 0;

    // File se data read karna
    while (count < DAYS && fscanf(file, "%d", &minutes[count]) == 1) {
        total += minutes[count];
        if (minutes[count] > max) {
            max = minutes[count];
        }
        count++;
    }
    fclose(file);

    if (count == 0) {
        printf("\nFile khali hai! Data enter karein.\n");
        return;
    }

    float average = (float)total / count;

    printf("\n================ WEEKLY SUMMARY ================\n");
    for (int i = 0; i < count; i++) {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }
    printf("------------------------------------------------\n");
    printf("Total Listening Time : %d minutes\n", total);
    printf("Average Time/Day     : %.2f minutes\n", average);
    printf("Highest Listening Day: %d minutes\n", max);
    printf("================================================\n");
}

// Data reset karne aur file clear karne ka function (Task 5)
void resetData(int minutes[]) {
    char confirm;
    printf("\nKya aap sach me sara data reset karna chahte hain? (y/n): ");
    scanf(" %c", &confirm); // Space leading whitespace ko ignore karta hai

    if (confirm == 'y' || confirm == 'Y') {
        // Array reset karna
        for (int i = 0; i < DAYS; i++) {
            minutes[i] = 0;
        }

        // File ko empty mode ("w") me khol kar turant band karne se data clear ho jata hai
        FILE *file = fopen("music_log.txt", "w");
        if (file != NULL) {
            fclose(file);
            printf("Sara weekly data aur 'music_log.txt' clear ho chuka hai!\n");
        }
    } else {
        printf("Reset cancel kar diya gaya.\n");
    }
}

int main() {
    int minutes[DAYS] = {0};
    int choice;

    // Menu-driven loop (Task 2)
    do {
        printf("\n===== MUSIC LISTENING LOGGER =====\n");
        printf("1. Log New Listening Minutes\n");
        printf("2. View Weekly Summary Report\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");
        printf("Apna option chunein (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                logMinutes(minutes);
                break;
            case 2:
                viewSummary();
                break;
            case 3:
                resetData(minutes);
                break;
            case 4:
                printf("\nApp band ho rahi hai. Goodbye!\n");
                break;
            default:
                printf("\nGalat option! Kripya 1 se 4 ke beech chunein.\n");
        }
    } while (choice != 4);

    return 0;
}