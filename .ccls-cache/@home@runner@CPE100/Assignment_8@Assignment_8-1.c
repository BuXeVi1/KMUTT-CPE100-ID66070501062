#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 100
double calculateAverage(int scores[], int numStudents) {
    double sum = 0.0;
    for (int i = 0; i < numStudents; i++) {
        sum += scores[i];
    }
    return sum / numStudents;
}
int findMinimum(int scores[], int numStudents) {
    int min = scores[0];
    for (int i = 1; i < numStudents; i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    return min;
}
int findMaximum(int scores[], int numStudents) {
    int max = scores[0];
    for (int i = 1; i < numStudents; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}
int main() {
    char filename[100];
    printf("Enter a file name to load student scores: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    char name[100];
    int scores[MAX_STUDENTS];
    int numStudents = 0;
    while (fscanf(file, "%s %d", name, &scores[numStudents]) != EOF) {
        printf("Student %d: %s, Score = %d\n", numStudents + 1, name, scores[numStudents]);
        numStudents++;
    }
    fclose(file);
    if (numStudents == 0) {
        printf("No student scores found in the file.\n");
        return 1;
    }
    double average = calculateAverage(scores, numStudents);
    int minimum = findMinimum(scores, numStudents);
    int maximum = findMaximum(scores, numStudents);
    printf("Average score is %.2lf.\n", average);
    printf("Minimum score is %d.\n", minimum);
    printf("Maximum score is %d.\n", maximum);
    FILE *statFile = fopen("stat.txt", "w");
    if (statFile == NULL) {
        printf("Error: Cannot create stat.txt file.\n");
        return 1;
    }
    fprintf(statFile, "Average score is %.2lf.\n", average);
    fprintf(statFile, "Minimum score is %d.\n", minimum);
    fprintf(statFile, "Maximum score is %d.\n", maximum);
    fclose(statFile);
    printf("Save statistics in file stat.txt successfully.\n");
    printf("End of program. Goodbye.\n");
    return 0;
}
