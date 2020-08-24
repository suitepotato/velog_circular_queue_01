// 원형 큐의 구현

#include <stdio.h>

#define queueSize 5
#define arraySize 6

char queue[arraySize];
int front = 0;
int rear = 0;

int isEmpty() {
    return (front == rear ? 1 : 0);
}

int isFull() {
    return ((rear + 1) % arraySize == front ? 1 : 0);
}

void enQueue(char element) {
    if (isFull() == 1) {
        printf("Overflow!\n");
    }
    else {
        rear = (rear + 1) % arraySize;
        queue[rear] = element;
        printf("rear : %d, front : %d\n", rear, front);
    }
}

char deQueue() {
    if (isEmpty() == 1) {
        printf("Underflow!\n");
    }
    else {
        front = (front + 1) % arraySize;
        printf("rear : %d, front : %d\n", rear, front);
        return queue[front];
    }
}

int main() {
    enQueue('A');
    enQueue('B');
    enQueue('C');
    enQueue('D');
    enQueue('E');
    enQueue('F');
    printf("%c\n", deQueue());
    printf("%c\n", deQueue());
    printf("%c\n", deQueue());
    printf("%c\n", deQueue());
    printf("%c\n", deQueue());
    deQueue();
    return 0;
}
