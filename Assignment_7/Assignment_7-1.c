#include <stdio.h>

int findMinimum(int num1, int num2){
    if (num1 > num2)
        return num2;
    else
        return num1;
}

int findMaximum(int num1, int num2){
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main(){
    int num1, num2, option = 0, min, max;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    while (option != 3)
    {
        printf("\nChoose what to do from options below");
        printf("\n1. Find minimum");
        printf("\n2. Find maximum");
        printf("\n3. Exit program");
        printf("\nEnter option no.: ");
        scanf("%d", &option);

        if (option == 1)
        {
            min = findMinimum(num1, num2);
            printf("Minimum value is: %d\n", min);
        }
        else if (option == 2)
        {
            max = findMaximum(num1, num2);
            printf("Maximum value is: %d\n", max);
        }
    }

    printf("End of program. Goodbye.\n");
    return 0;
}
