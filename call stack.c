#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char functionName[20];
    struct Node *next;
};

struct Node *top = NULL;

int isEmpty() {
    return top == NULL;
}

void push(char fname[]) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newNode->functionName, fname);
    newNode->next = top;
    top = newNode;
    printf("Function called: %s\n", fname);
}

void pop() {
    if (isEmpty()) {
        printf("No function calls left\n");
        return;
    }
    struct Node *temp = top;
    printf("Function ended: %s\n", top->functionName);
    top = top->next;
    free(temp);
}

void peek() {
    if (isEmpty())
        printf("No active function\n");
    else
        printf("Current function: %s\n", top->functionName);
}

void size() {
    int count = 0;
    struct Node *temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Active function calls: %d\n", count);
}

int main() {
    push("main");
    push("func1");
    push("func2");

    pop();
    peek();
    size();

    return 0;
}