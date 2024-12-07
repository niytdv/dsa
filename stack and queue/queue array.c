#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

// Enqueue operation
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
    printf("%d enqueued to queue\n", value);
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
        return;
    }
    printf("Dequeued element: %d\n", queue[front++]);
    if (front > rear) {
        front = rear = -1; // Reset the queue if empty
    }
}

// Display queue
void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    return 0;
}

