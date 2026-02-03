#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char plateID[10];
    struct Node *next;
};

struct Node *top = NULL;

int isEmpty() {
    return top == NULL;
}

void push(char plateID[]) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newNode->plateID, plateID);
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (isEmpty()) {
        printf("No plates to remove\n");
        return;
    }
    struct Node *temp = top;
    printf("Plate removed: %s\n", top->plateID);
    top = top->next;
    free(temp);
}

void peek() {
    if (isEmpty())
        printf("No plates in stack\n");
    else
        printf("Top plate: %s\n", top->plateID);
}

void size() {
    int count = 0;
    struct Node *temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total plates: %d\n", count);
}

int main() {
    push("P1");
    push("P2");
    push("P3");

    pop();
    peek();
    size();

    return 0;
}