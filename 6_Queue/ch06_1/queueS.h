 #pragma once
#define Q_SIZE 4
typedef char element;	// 큐 원소(element)의 자료형을 char로 정의

typedef struct {
	element queue[Q_SIZE];	// 1차원 배열 큐 선언
	int front, rear;
} QueueType;

QueueType* createQueue();
int isQueueEmpty(QueueType* Q);
int isQueueFull(QueueType* Q);
void enQueue(QueueType* Q, element item);
element deQueue(QueueType* Q);
element peekQ(QueueType * Q);
void printQ(QueueType * Q);

배열을 메모리 공간을 뺐다가 넣다가 하고 그 값을 실제로 안 지울거야
이게 되게 무식해 보이는거지, 무식한거야 그래서 이거를 링크드 리스트로 만듬!
그런 식으로 이해를 하시면 됩니다, 브레이크 포인트를 내면 됩니다.

어디 시험을 냈냐면 , 큐이즈 풀이 나오는 조건이 언제인지!!! 이거는 셀프 스터디를 해라, 이거 시험시험