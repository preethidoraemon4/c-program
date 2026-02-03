#include <stdio.h>
#include <string.h>

#define MAX 5

char queue[MAX][10];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1);
}

void enqueue(char jobID[]) {
    if (rear == MAX - 1) {
        printf("Print queue is full!\n");
        return;
    }
    if (front == -1)
        front = 0;

    strcpy(queue[++rear], jobID);
    printf("Job %s added to queue\n", jobID);
}

void dequeue() {
    if (isEmpty()) {
        printf("No print jobs pending!\n");
        return;
    }
    printf("Job %s printed\n", queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void showFront() {
    if (isEmpty()) {
        printf("No jobs in queue\n");
    } else {
        printf("Next job to be printed: %s\n", queue[front]);
    }
}

void size() {
    if (isEmpty())
        printf("Pending jobs: 0\n");
    else
        printf("Pending jobs: %d\n", rear - front + 1);
}

int main() {
    enqueue("J1");
    enqueue("J2");
    enqueue("J3");

    dequeue();
    showFront();
    size();

    return 0;
}