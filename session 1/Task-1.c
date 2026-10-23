//Write a simple C program tasklist_c.c that allows you to add up to 5 tasks (as strings) to a global array and print all tasks using a for loop.

#include <stdio.h>
#include <string.h>

char tasks[5][50];
int count = 0;

void addTask(char title[]){
    if(count >= 5){
        printf("Task List is Full");
        return;
    }
    strcpy(tasks[count], title);
    count++;
}

void main(){
    addTask("Study C");
    addTask("Practice Patterns");
    addTask("Push Code to Github");
    addTask("Revise Pointers");
    addTask("Do Mysql Practice");

    printf("All Tasks\n");
    int i;
    for(i = 0; i < count; i++){
        printf("%d. %s\n", i+1,tasks[i]);
    }
}