#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty() {
    return (top == -1);
}

void push(int pageID) {
    if (top == MAX - 1) {
        printf("History stack is full\n");
        return;
    }
    stack[++top] = pageID;
    printf("Page %d opened\n", pageID);
}

void pop() {
    if (isEmpty()) {
        printf("No pages to go back\n");
        return;
    }
    printf("Page %d closed\n", stack[top--]);
}

void peek() {
    if (isEmpty())
        printf("No current page\n");
    else
        printf("Current page: %d\n", stack[top]);
}

void size() {
    printf("Total pages in history: %d\n", top + 1);
}

int main() {
    push(101);
    push(102);
    push(103);

    pop();
    peek();
    size();

    return 0;
}