#include <stdio.h>

int main() {
    int rolls[] = {101, 102, 103, 101};
    int n = 4;
    int duplicateFound = 0;

    // Compare every roll number with others
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (rolls[i] == rolls[j]) {
                duplicateFound = 1;
                break;
            }
        }
        if (duplicateFound)
            break;
    }

    if (duplicateFound)
        printf("Duplicate found\n");
    else
        printf("No duplicate found\n");

    return 0;
}