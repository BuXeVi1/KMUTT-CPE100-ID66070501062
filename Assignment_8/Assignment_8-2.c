#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 100
struct Student {
  char name[100];
  int score;
};
void insertionSort(struct Student students[], int count) {
  int i, j;
  struct Student key;
  for (i = 1; i < count; i++) {
    key = students[i];
    j = i - 1;
    while (j >= 0 && students[j].score > key.score) {
      students[j + 1] = students[j];
      j = j - 1;
    }
    students[j + 1] = key;
  }
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
  struct Student students[MAX_STUDENTS];
  int numStudents = 0;
  while (fscanf(file, "%s %d", students[numStudents].name,
                &students[numStudents].score) != EOF) {
    printf("Student %d: %s, Score = %d\n", numStudents + 1,
           students[numStudents].name, students[numStudents].score);
    numStudents++;
  }
  fclose(file);
  if (numStudents == 0) {
    printf("No student scores found in the file.\n");
    return 1;
  }
  char newStudentName[100];
  while (1) {
    printf("Enter new student name (type 'END' to sort student scores and end "
           "the program): ");
    scanf("%s", newStudentName);
    if (strcmp(newStudentName, "END") == 0) {
      break;
    }
    if (numStudents < MAX_STUDENTS) {
      printf("Enter %s's score: ", newStudentName);
      scanf("%d", &students[numStudents].score);
      strcpy(students[numStudents].name, newStudentName);
      numStudents++;
    } else {
      printf("Maximum number of students reached.\n");
    }
  }
  insertionSort(students, numStudents);
  printf("---------------Sort students by scores---------------\n");
  for (int i = 0; i < numStudents; i++) {
    printf("Student %d: %s, Score = %d\n", i + 1, students[i].name,
           students[i].score);
  }
  printf("End of program. Goodbye.\n");
  return 0;
}
