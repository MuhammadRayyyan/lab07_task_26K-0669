#include <stdio.h>

int main() {
    int data[3][3];
    int key[3][3];
    int encrypted[3][3];

//    INPUTS 
    printf("Enter 9 values for Data Matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &data[i][j]);
        }
    }
    printf("\nEnter 9 values for Key Matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &key[i][j]);
        }
    }
 // formula
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            encrypted[i][j] = (data[i][j] * key[i][j]) + (i + j);
        }
    }

    printf("\n--- Encrypted Matrix ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", encrypted[i][j]);
        }
        printf("\n");
    }
    int maxVal = encrypted[0][0];
    int maxRow = 0;
    int maxCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (encrypted[i][j] > maxVal) {
                maxVal = encrypted[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

// Display Final Result
    printf("\n--- Maximum Value Details ---\n");
    printf("Highest Encrypted Value: %d\n", maxVal);
    printf("Position: Row %d, Column %d\n", maxRow + 1, maxCol + 1);

    return 0;
}