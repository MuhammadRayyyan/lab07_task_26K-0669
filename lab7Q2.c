#include <stdio.h>

int main() {
    int arr[9];
    int valid = 1; // 1 = Valid, 0 = Invalid

    printf("Enter 9 numbers (0 for empty, 1-9): ");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Range check (kya koi number 0 se chhota ya 9 se bara hai?)
    for (int i = 0; i < 9; i++) {
        if (arr[i] < 0 || arr[i] > 9) {
            valid = 0;
        }
    }

    // Step 2: Duplicate check (kya koi number 1-9 do baar aya hai?)
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            // Agar number 0 nahi hai aur do jagah same number mil gaya
            if (arr[i] != 0 && arr[i] == arr[j]) {
                valid = 0;
            }
        }
    }

    // Final Output
    if (valid == 1) {
        printf("Grid is valid\n");
    } else {
        printf("Grid is not valid\n");
    }

    return 0;
}
