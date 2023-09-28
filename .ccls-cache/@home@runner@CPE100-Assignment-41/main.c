#include <stdio.h>
#include <string.h>

int main() {
    int initialMultiplier, finalMultiplier;
    char continueChoice;
    do {
        while (1) {
            //Input 
            printf("Enter Start number: ");
            scanf("%d", &initialMultiplier);
            printf("Enter End number: ");
            scanf("%d", &finalMultiplier);

            //Check Eror
            if (finalMultiplier < initialMultiplier) { printf("Error: Final multiplier must be greater than or equal to initial multiplier.\n"); } 
            else { break; }
        }

        //Multiplier
        printf("Multiplication Table from %d to %d:\n", initialMultiplier, finalMultiplier);
        for (int i = initialMultiplier; i <= finalMultiplier; i++) {
            for (int j = 1; j <= 10; j++) { printf("%d x %d = %d\n", i, j, i * j); }
            printf("\n"); }

        //Ask user to continue
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continueChoice);
   
    } while (continueChoice == 'y' || continueChoice == 'Y');
    
    printf("End of program. Goodbye.\n");
    return 0; // Exit successfully
}