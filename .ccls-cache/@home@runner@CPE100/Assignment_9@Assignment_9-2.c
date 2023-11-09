#include <stdio.h>
#include <string.h>

int findStringLength(char str[]) {
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }
  return length;
}

char *findSubString(char str1[], char str2[]) {
  int len1 = findStringLength(str1);
  int len2 = findStringLength(str2);

  for (int i = 0; i <= len1 - len2; i++) {
    int j;
    for (j = 0; j < len2; j++) {
      if (str1[i + j] != str2[j]) {
        break;
      }
    }

    if (j == len2) {
      return &str1[i];
    }
  }

  return NULL;
}

int main() {
  char string1[] = "I love CPE";
  char string2[] = "love";

  char *output = findSubString(string1, string2);

  if (output != NULL) {
    printf("Index of the first occurrence = %ld", output - string1);
  } else {
    printf("string2 is not a substring of string1");
  }

  return 0;
}