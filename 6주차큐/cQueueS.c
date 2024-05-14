#include <stdio.h>
#include <stdlib.h>
#include "cQueueS.h"

// --- 원형큐 구현 ---

QueueType* createCQueue(){
    QueueType* cQ;
    cQ = (QueueType*)malloc(sizeof(QueueType));
    cQ->front = 0;
    cQ->rear = 0;
    return cQ;
}
// 원형 큐가 공백 상태인지 검사하는 연산
int inCQueueEmprt(QueueType* cQ){
    if(cQ->front == cQ->rear){
        printf(" circular Queue is empty! ");
        return 1;
    }
    else return 0;
}
// 원형 큐가 포화 상태인지 검사하는 연산
int inCQueueFull(QueueType* cQ){
    if(((cQ->rear + 1) %cQ_SIZE) == cQ -> front){
        printf(" Circular Queue is full ");
        return 1;
    }
    else return 0;
}

// 원형 큐의 rear 원소를 삽입하는 연산
void enCQueue(QueueType* cQ, element item){
    if(isQueueFull(cQ)) return;
    else{
        cQ->rear = (cQ->rear + 1) % cQ_SIZE;
        cQ->queue[cQ->rear] = item;

    }
}

// 원형 큐의 front에서 원소를 삭제하고 반환하느 ㄴ연산
element deCQueue(QueueType* cQ){
    if(isCQueueEmpty(cQ)) return;
    else{
        cQ->front = (cQ->front + 1) % cQ_SIZE;
        return cQ->queue[cQ->front];
    }
}

// 원형 큐의 가장 앞에 있는 원소를 검색하는 연산
element peekCQ(QueueType* cQ){
    if(isCQueueEmpty(cQ)) exit(1);
    else return cQ->queue[(cQ->front + 1) % cQ_SIZE];
}
// 원형 큐의 원소를 출력하는 연산
void printCQ(QueueType* cQ){
    int i, first, last;
    first = (cQ->front + 1) % cQ_SIZE;
    last = (cQ->rear + 1) % cQ_SIZE;
    printf(" Circular Queue : [");
    i = first;
    while(i != last){
        printf("%3c", cQ->queue[i]);
        i = (i+1) % cQ_SIZE;
    }
    printf(" ] ");
}

int main(void){
    QueueType* cQ = createCQueue;
    element data;
    printf("\n ***** 원형 큐 연산 *****\n");
    printf("\n 삽입 A>>"); enCQueue(cQ, 'A'); printCQ(cQ);
    printf("\n 삽입 B>>"); enCQueue(cQ, 'B'); printCQ(cQ);
    printf("\n 삽입 C>>"); enCQueue(cQ, 'C'); printCQ(cQ);

    data = peekCQ(cQ); printf(" peek item : %c \n", data);
    printf("\n 삭제  >>");  data = deCQueue(cQ); printCQ(cQ);
    printf("\t삭제 데이터 : %c", data);

    printf("\n 삭제  >>");  data = deCQueue(cQ); printCQ(cQ);
    printf("\t삭제 데이터 : %c", data);
    printf("\n 삭제  >>");  data = deCQueue(cQ); printCQ(cQ);
    printf("\t\t삭제 데이터 : %c", data);

    printf("\n 삽입 D>>");  enCQueue(cQ, 'D'); printCQ(cQ);
	printf("\n 삽입 E>>");  enCQueue(cQ, 'E'); printCQ(cQ);
	getchar(); return 0;

}

// 데크는 안냄?