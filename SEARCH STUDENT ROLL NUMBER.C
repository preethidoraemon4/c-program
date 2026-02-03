#include <stdio.h>

int main() {
    int rolls[] = {10, 20, 30, 40, 50};
    int n = 5;
    int search = 30;
    int position = -1;

    // Linear search
    for (int i = 0; i < n; i++) {
        if (rolls[i] == search) {
            position = i + 1; // Position starts from 1
            break;
        }
    }

    if (position != -1)
        printf("Element found at position %d\n", position);
    else
        printf("Element not found\n");

    return 0;
}