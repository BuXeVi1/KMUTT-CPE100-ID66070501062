#include <stdio.h>
#include <string.h>

int main() {
  int initialMultiplier, finalMultiplier;
  char continueChoice[4];
  do {
    while (1) {
      // Input
      printf("Enter Start number: ");
      scanf("%d", &initialMultiplier);
      printf("Enter End number: ");
      scanf("%d", &finalMultiplier);

      // Check Error
      if (finalMultiplier < initialMultiplier) {
        printf("Error: Final multiplier must be greater than or equal to "
               "initial multiplier.\n");
      } else {
        break;
      }
    }

    // Multiplier
    printf("Multiplication Table from %d to %d:\n", initialMultiplier,
           finalMultiplier);
    for (int i = 1; i <= 5; i++) {
      for (int j = initialMultiplier; j <= finalMultiplier; j++) {
        printf("%-3d", j * i);
      }
      printf("\n");
    }
    for (int i = initialMultiplier; i <= finalMultiplier; i++) {
      printf("\n");
      for (int j = 1; j <= 5; j++) {
        printf("%d x %d = %d\n", i, j, i * j);
      }
      printf("\n");
    }

    // Ask user to continue
    printf("Type again to continue or type END to end: ");
    scanf("%s", continueChoice);
  } while (strcmp(continueChoice, "END") != 0);
  return 0;
}