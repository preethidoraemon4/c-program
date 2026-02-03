#include <stdio.h>

int main() {
    int attendance[] = {1, 1, 1, 1, 1}; // 1 = present
    int n = 5;
    int count = 0;

    // Scan attendance list once
    for (int i = 0; i < n; i++) {
        if (attendance[i] == 1) {
            count++;
        }
    }

    printf("Students present = %d\n", count);
    return 0;
}