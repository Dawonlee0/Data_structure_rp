#pragma once
#define Q_SIZE 4

typedef char element;

typedef struct{
    element queue[Q_SIZE];
    int front, rear;

}QueueType; // 별표, 메인이 되는 데이타 영역은 배열로 했다 

QueueType* createQueue();
int isQueueEmpty(QueueType* Q);
int isQueueFull(QueueType* Q);
void enQueue(QueueType* Q, element item);
element deQueue(QueueType* Q);
element peekQ(QueueType * Q);
void printQ(QueueType * Q);