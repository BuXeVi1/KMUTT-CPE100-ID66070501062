#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main5_3() {
    char word[100];
    int countA;
    printf("Enter a word (type END to end program): ");
    while (1) {
        countA = 0;
        scanf("%s", word);
        for (int i = 0; word[i]; i++) { word[i] = tolower(word[i]); }
        if (strcmp(word, "end") == 0) { break; }
        for (int i = 0; word[i]; i++) { if (word[i] == 'a') { countA++; } }
        printf("Total number 'a' is %d.\n", countA);
        printf("Enter a word (type END to end program): ");
    }
    printf("End of program. Goodbye.\n");
    return 0;
}
