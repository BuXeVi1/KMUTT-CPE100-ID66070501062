#include <stdio.h>

int main5_1() {
  int scores[10];
  int numStudents = 0;
  int totalScore = 0;
  int leastScore = -1;
  int leastScoreStudent = -1;
  printf("Enter student scores (type -1 to start calculation)\n");
  while (numStudents < 10) {
    int score;
    printf("Enter score of student %d: ", numStudents + 1);
    scanf("%d", &score);
    if (score == -1) {
      break;
    }
    if (score < 0 || score > 100) {
      printf("Invalid score. Please enter a score between 0 and 100.\n");
      continue;
    }
    totalScore += score;
    numStudents++;
    if (leastScore == -1 || score < leastScore) {
      leastScore = score;
      leastScoreStudent = numStudents;
    }
  }
  double averageScore = (double)totalScore / numStudents;
  printf("The minimum score is %d.\n", leastScore);
  printf("Student %d has the minimum score.\n", leastScoreStudent);
  return 0;
}
