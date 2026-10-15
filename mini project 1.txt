#include <stdio.h>

void main(){
    int minutes[7];
    int choice;
    int i;

    while(1){
        printf("1. Log daily minutes.\n");
        printf("2. View weekly summary.\n");
        printf("3. Reset weekly data.\n");
        printf("4. Exit.\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
           
        if(choice == 1){
            FILE *fp = fopen("music_log.txt","w");

            printf("\nEnter listening miutes for 7 days:\n");
            for(i = 0; i < 7; i++){
                printf("Day %d: ", i + 1);
                scanf("%d",&minutes[i]);
                fprintf(fp, "%d\n", minutes[i]);
            }

            fclose(fp);
        }

        else if(choice == 2){
            FILE *fp = fopen("music_log.txt","r");

            if(fp == NULL){
                printf("No log files found. Please log minutes first.\n");
            }else{
                int total = 0;
                int heigest = -1;

                for(i = 0; i < 7; i++){
                    if(fscanf(fp, "%d", &minutes[i]) == 1){
                        total += minutes[i];
                        if(minutes[i] > heigest){
                            heigest = minutes[i];
                        }
                    }
                }

                fclose(fp);

                float avg = total / 7.0;

                printf("\nTotal minutes: %d\n",total);
                printf("Average minutes: %.2f\n",avg);
                printf("Heigest minutes: %d\n",heigest);
            }
        }

        else if(choice == 3){
            char confirm;

            printf("Are you sure to reset all data? (y/n): ");
            scanf(" %c",&confirm);

            if(confirm == 'y' || confirm == 'Y'){
                for(i = 0; i < 7; i++){
                    minutes[i] = 0;
                }

                FILE *fp = fopen("music_log.txt","w");

                if(fp != NULL){
                    fclose(fp);
                }

                printf("Data reset successfully.\n");
            }else{
                printf("Reset Cancelled.\n");
            }
        }

        else if(choice == 4){
            printf("Thanks!");
            break;
        }

        else{
           printf("Invalid Choice! Please select between 1 to 4\n"); 
        } 
    }

}