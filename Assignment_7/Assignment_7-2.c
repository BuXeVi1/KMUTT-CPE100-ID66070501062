#include <stdio.h>

void printMatrix(int M[][10], int row, int col){
    int i, j;
    printf("\nPrint Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%7d", M[i][j]);
        }
        printf("\n");
    }
}

void readMatrix(int M[][10], int *row, int *col){
    int i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", row, col);
    printf("Input elements of the matrix [%d x %d]:\n", *row, *col);
    for (i = 0; i < *row; i++) {
        for (j = 0; j < *col; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    printMatrix(M, *row, *col);
}

int main(){
    int M1[10][10], M2[10][10];
    int rowM1, colM1, rowM2, colM2;
    
    printf("Read Matrix M1:\n");
    readMatrix(M1, &rowM1, &colM1);
    
    printf("Read Matrix M2:\n");
    readMatrix(M2, &rowM2, &colM2);
    
    printf("\nM1 dimension: row = %d, col = %d\n", rowM1, colM1);
    printf("M2 dimension: row = %d, col = %d\n", rowM2, colM2);
    
    return 0;
}
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
