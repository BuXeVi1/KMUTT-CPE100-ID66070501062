#include <ctype.h>
#include <stdio.h>
#include <string.h>

int isAllDigit(char *str) {
  while (*str) {
    if (!isdigit(*str)) {
      return 0;
    }
    str++;
  }
  return 1;
}

void getInput() {
  char input[100];

  while (1) {
    printf("Enter a string (or type 'END' to exit): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strcmp(input, "END") == 0) {
      break;
    }

    if (isAllDigit(input)) {
      printf("All digits\n");
    } else {
      printf("Not all digits\n");
    }
  }
}

int main() {
  getInput();
  return 0;
}
