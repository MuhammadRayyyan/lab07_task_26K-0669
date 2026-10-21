#include <stdio.h>

int main() {
    // first loop 
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("Then reverse it in the same output:\n");

//    Second loop fore reverse
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // 3. Modified pattern displaying multiplication values (i * j)
    printf("\n--- Multiplication Pattern (i x j) ---\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}