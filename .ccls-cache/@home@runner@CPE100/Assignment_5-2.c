#include <stdio.h>
#include <string.h>

int main() {
    char studentNames[10][50];
    int numStudents = 0;

    printf("Enter student names (type 999 to print all names)\n");
    while (1) {
        char name[50];
        printf("Enter name of student %d: ", numStudents + 1);
        fgets(name, sizeof(name), stdin);
        size_t length = strlen(name);
        if (length > 0 && name[length - 1] == '\n') { name[length - 1] = '\0'; }
        if (strcmp(name, "999") == 0) { break; }
        strcpy(studentNames[numStudents], name);
        numStudents++;
    }
    printf("Name list: ");
    for (int i = 0; i < numStudents; i++) {
        printf("%s", studentNames[i]);
        if (i < numStudents - 1) { printf(" "); }
    }
    printf("\n");
    return 0;
}
