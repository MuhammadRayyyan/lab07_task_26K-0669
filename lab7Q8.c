#include <stdio.h>

int main() {
    // 1. Stars Pattern
    printf("--- Pattern 1: Stars ---\n");
    for (int i = 1; i <= 5; i++) {
        // Spaces print karna
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        // Stars print karna
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 2. Numbers Pattern (1 to 5)
    printf("\n--- Pattern 2: Numbers ---\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 3. Alphabets Pattern (A to E)
    printf("\n--- Pattern 3: Alphabets ---\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    // 4. Odd Stars Pyramid
    printf("\n--- Pattern 4: Stars Pyramid ---\n");
    for (int i = 1; i <= 5; i++) {
        // Spaces
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        // Odd number of stars (1, 3, 5, 7, 9)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 5. Odd Numbers Pyramid
    printf("\n--- Pattern 5: Numbers Pyramid ---\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 6. Odd Alphabets Pyramid
    printf("\n--- Pattern 6: Alphabets Pyramid ---\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}