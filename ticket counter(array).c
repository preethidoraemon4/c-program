#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1);
}

void enqueue(int customerID) {
    if (rear == MAX - 1) {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = customerID;
    printf("Customer %d added to queue\n", customerID);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! No customer to serve.\n");
        return;
    }
    printf("Customer %d served\n", queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void showFront() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Current customer being served: %d\n", queue[front]);
    }
}

void size() {
    if (isEmpty())
        printf("Total customers waiting: 0\n");
    else
        printf("Total customers waiting: %d\n", rear - front + 1);
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    dequeue();
    showFront();
    size();

    return 0;
}