//Modify your tasklist_c.c to add a function markTaskDone(int index) that sets the selected task to 'DONE' in the array, then print the updated list. Hint: Use a separate status array or append ' - DONE' to the task string.

#include <stdio.h>
#include <string.h>

char tasks[5][50];
int done[5];
int count = 0;

void addTask(char title[]){
    if(count >= 5){
        printf("Task List is Full");
        return;
    }
    strcpy(tasks[count], title);
    done[count] = 0;
    count++;
}

void markTaskDone(int index){
    if(index < 0 || index >= count){
        printf("Invalid task number!\n");
        return;
    }
    done[index] = 1;
}

void showTasks(){
    for(int i = 0; i < count; i++){
        if(done[i] == 1){
            printf("%d. %s - Done\n", i + 1, tasks[i]);
        }else{
            printf("%d. %s - Pending\n", i + 1, tasks[i]);
        }
    }
}

void main(){
    addTask("Study C");
    addTask("Practice Patterns");
    addTask("Push Code to Github");

    printf("Before\n");
    showTasks();


    printf("After\n");
    markTaskDone(1);    

    showTasks();
}