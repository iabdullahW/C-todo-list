#include <stdio.h>
#include <string.h>

#define MAX_TASKS 10
#define MAX_LENGTH 50

int main() {
    char tasks[MAX_TASKS][MAX_LENGTH];
    int taskCount = 0;
    char input[MAX_LENGTH];

    printf("Welcome to the To-Do List\n");

    while (1) {
        printf("\nEnter 'add' to add a task, 'show' to display tasks, or 'exit' to quit: ");
        scanf("%s", input);

        if (strcmp(input, "add") == 0) {
            if (taskCount == MAX_TASKS) {
                printf("To-Do List is full!\n");
                continue;
            }
            printf("Enter task: ");
            scanf("%s", tasks[taskCount]);
            taskCount++;
        } else if (strcmp(input, "show") == 0) {
            printf("To-Do List:\n");
            for (int i = 0; i < taskCount; i++) {
                printf("%d. %s\n", i + 1, tasks[i]);
            }
        } else if (strcmp(input, "exit") == 0) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid input\n");
        }
    }

    return 0;
}
