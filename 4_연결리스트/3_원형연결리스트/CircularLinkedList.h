#pragma once

// 연결된 구조의 노드 구조를 구조체로 정의
typedef struct ListNode {
    char data[4];
    struct ListNode* link;
} ListNode;

// 리스트의 시작을 나타내는 head 노드를 구조체로 정의
typedef struct {
    ListNode* head;
} LinkedList_h;

LinkedList_h* createLinkedList_h(void);
void printList(LinkedList_h* CL);
void insertFirstNode(LinkedList_h* CL, char* x);
void insertMiddleNode(LinkedList_h* CL, ListNode* pre, char* x);
void insertLastNode(LinkedList_h* CL, char* x);
void deleteNode(LinkedList_h* CL, ListNode* old);
ListNode* searchNode(LinkedList_h* CL, char* x);
