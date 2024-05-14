#include <stdio.h>
#include <stdlib.h>
#include "queueS.h"

// 공백 순차 큐를 생성하는 연산
QueueType* createQueue(){
    QueueType* Q;
    Q = (QueueType*)malloc(sizeof(QueueType));
    Q -> front = -1;
    Q->rear = -1;
    return Q;
}

// 순차 큐가 공백 상태인지 검사하는 연산
int isQueueEmpty(QueueType* Q){
    if(Q->front == Q->rear){
        printf(" Queue is empty! \n\t");
        return 1;
    }
    else return 0;
}

// 순차 큐가 포화 상태인지 검사하는 연산
int isQueueFull(QueueType* Q){
    if(Q->rear == Q_SIZE - 1){
        printf(" Queue is full! \n\t");
        return 1;

    }
    else return 0;
}

// 순차 큐의 rear에 원소를 삽입하는 연산
void enQueue(QueueType* Q, element item){
    if (isQueueFull(Q)) return;
    else{
        Q->rear++;
        Q->queue[Q->rear] = item;
    }
}

// 순차 큐의 가장 앞에 있는 원소를 검색하는 연산
element deQueue(QueueType* Q){
    if(isQueueEmpty(Q)) {
        printf("Queue is empty!\n");
        return '\0';  // 널 문자 반환 또는 다른 에러 코드를 사용할 수 있음
    }
    else {
        Q->front++; // 별표별표
        return Q->queue[Q->front];
    }
}
// 순차 큐의 가장 앞에 있는 원소를 검색하는 연산
element peekQ(QueueType* Q){
    if (isQueueEmpty(Q)) { // 오백 상태이면 연산 중단
        printf("Queue is empty!\n");
        return '\0';  // 비어있을 때 반환할 값
    }
    return Q->queue[Q->front + 1];
}

// 순차 큐의 원소를 출력하는 연산
void printQ(QueueType* Q){
    int i;
    printf(" Queue : [");
    for(i = Q->front + 1; i <= Q-> rear; i++){
        printf("%3c", Q->queue[i]);
    }
    printf(" ]");
}

int main(void){
    QueueType* Q1 = createQueue();
    element data;
    printf("\n ***** 순차 큐 연산 ***** \n");
    printf("\n 삽입 A>>"); enQueue(Q1, 'A'); printQ(Q1);
    printf("\n 삽입 B>>"); enQueue(Q1, 'B'); printQ(Q1);
    printf("\n 삽입 C>>"); enQueue(Q1, 'C'); printQ(Q1);
    data = peekQ(Q1); data = deQueue(Q1); printQ(Q1);
    printf("\n 삭제 >>"); data = deQueue(Q1); printQ(Q1);
    printf("\t 삭제 데이터 : %c", data);
    printf("\n 삭제 >> "); data = deQueue(Q1); printQ(Q1);
    printf("\t 삭제 데이터 : %c", data);
    printf("\n 삭제 >> "); data = deQueue(Q1); printQ(Q1);
    printf("\t\t 삭제 데이터 : %c", data);

    printf("\n 삽입 D>>"); enQueue(Q1, 'D'); printQ(Q1);
    printf("\n 삽입 E>>"); enQueue(Q1, 'E'); printQ(Q1);

    getchar(); return 0;

}