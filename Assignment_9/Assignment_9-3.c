#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int generateRandomNumber() {
  srand(time(NULL));
  return rand() % 100 + 1;
}

int playGame() {
  int answer = generateRandomNumber();
  int guessesLeft = 7;
  int guess;

  printf("Guess the number (1-100).\n");

  while (guessesLeft > 0) {
    printf("You have %d guesses left: ", guessesLeft);
    scanf("%d", &guess);

    if (guess == answer) {
      printf("Congratulations! You guessed the correct number.\n");
      return 1;
    } else if (guess < answer) {
      printf("Too low. Try again.\n");
    } else {
      printf("Too high. Try again.\n");
    }
    guessesLeft--;
  }
  printf("You've used all your guesses. The correct number was %d.\n", answer);
  return 0;
}

int main() {
  int totalScore = 0;
  int totalRounds = 0;
  char input[100];
  do {
    int result = playGame();
    totalRounds++;
    if (result) {
      totalScore++;
    }
    printf("Do you want to play again? Enter 'END' to quit or any other input "
           "to continue: ");
    scanf("%s", input);
  } while (strcmp(input, "END") != 0);
  printf("Total score: %d\n", totalScore);
  printf("Total rounds played: %d\n", totalRounds);
  return 0;
}