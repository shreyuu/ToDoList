#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TASKS 100

char tasks[MAX_TASKS][50];
int taskCount = 0;

void addTask() {
    char task[50];
    printf("Enter the task-> ");
    fgets(task, sizeof(task), stdin);  // scanf stops reading at the first whitespace character, so if your task includes spaces, scanf might not capture the entire task in one go.
    task[strcspn(task, "\n")] = '\0';
    if (taskCount < MAX_TASKS) {
        strcpy(tasks[taskCount], task);
        taskCount++;
    } else {
        printf("Task list is full.\n");
    }
}

void showTasks() {
    printf("Tasks:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%s\n", tasks[i]);
    }
}

void removeTask() {
    if (taskCount > 0) {
        taskCount--;
        printf("Task removed.\n");
    } else {
        printf("No tasks to remove.\n");
    }
}

int main() {
    while (1) {
        printf("<==== Main Menu ====>\n");
        printf("1. Add task\n");
        printf("2. Show all tasks\n");
        printf("3. Remove Task\n");
        printf("4. Exit\n");
        
        int choice;
        printf("Enter your choice-> ");
        scanf("%d", &choice);
        getchar();
        
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                showTasks();
                break;
            case 3:
                removeTask();
                break;
            case 4:
                printf("Program Ended\n");
                exit(0);
            default:
                printf("Invalid input\n");
        }
    }

    return 0;
}
