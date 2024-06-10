 #pragma once
#define Q_SIZE 4
typedef char element;	// ť ����(element)�� �ڷ����� char�� ����

typedef struct {
	element queue[Q_SIZE];	// 1���� �迭 ť ����
	int front, rear;
} QueueType;

QueueType* createQueue();
int isQueueEmpty(QueueType* Q);
int isQueueFull(QueueType* Q);
void enQueue(QueueType* Q, element item);
element deQueue(QueueType* Q);
element peekQ(QueueType * Q);
void printQ(QueueType * Q);

�迭�� �޸� ������ ���ٰ� �ִٰ� �ϰ� �� ���� ������ �� ����ž�
�̰� �ǰ� ������ ���̴°���, �����Ѱž� �׷��� �̰Ÿ� ��ũ�� ����Ʈ�� ����!
�׷� ������ ���ظ� �Ͻø� �˴ϴ�, �극��ũ ����Ʈ�� ���� �˴ϴ�.

��� ������ �³ĸ� , ť���� Ǯ�� ������ ������ ��������!!! �̰Ŵ� ���� ���͵� �ض�, �̰� �������