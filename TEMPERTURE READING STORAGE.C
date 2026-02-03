#include <stdio.h>

int main() {
    int n = 4;
    int temp[n];   // O(n) space

    // Input temperature readings
    temp[0] = 30;
    temp[1] = 31;
    temp[2] = 29;
    temp[3] = 32;

    // Display readings
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}