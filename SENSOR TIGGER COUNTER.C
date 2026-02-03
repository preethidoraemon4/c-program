#include <stdio.h>

int main() {
    int triggerCount = 0;   // O(1) space

    // Simulating sensor triggers
    int sensorTriggers = 5;

    for (int i = 0; i < sensorTriggers; i++) {
        triggerCount++;     // Increment on each trigger
    }

    printf("Total triggers = %d\n", triggerCount);
    return 0;
}