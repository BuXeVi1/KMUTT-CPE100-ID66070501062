#include <stdio.h>

int findMinimum(int num1, int num2) {
  if (num1 < num2)
    return num1;
  else
    return num2;
}

void findMaximum(int num1, int num2, int *max) {
  if (num1 > num2)
    *max = num1;
  else
    *max = num2;
}

int main() {
  int num1, num2, option = 0, min, max;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &num1, &num2);

  while (option != 3) {
    printf("\nChoose what to do from options below");
    printf("\n1. Find minimum");
    printf("\n2. Find maximum");
    printf("\n3. Exit program");
    printf("\nEnter option no.: ");
    scanf("%d", &option);

    if (option == 1) {
      min = findMinimum(num1, num2);
      printf("Minimum value is: %d\n", min);
    } else if (option == 2) {
      findMaximum(num1, num2, &max);
      printf("Maximum value is: %d\n", max);
    } else if (option == 3) {
      printf("End of program. Goodbye.\n");
    } else {
      printf("Invalid option. Please choose a valid option (1, 2, or 3).\n");
    }
  }
  return 0;
}
