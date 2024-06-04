#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "CircularLinkedList.h"

LinkedList_h* createLinkedList_h(void) {
    LinkedList_h* CL;
    CL = (LinkedList_h*)malloc(sizeof(LinkedList_h));
    CL->head = NULL;
    return CL;
}

void printList(LinkedList_h* CL) {
    ListNode* p;
    p = CL->head;
    if (p == NULL) {
        printf("()\n");
        return;
    }
    do {
        printf("%s", p->data);
        p = p->link;
        if (p != CL->head) printf(", ");
    } while (p != CL->head);
    printf("\n");
}

void insertFirstNode(LinkedList_h* CL, char* x) {
    ListNode* newNode, * temp;
    newNode = (ListNode*)malloc(sizeof(ListNode));
    strcpy(newNode->data, x);
    if (CL->head == NULL) {
        CL->head = newNode;
        newNode->link = newNode;
    } else {
        temp = CL->head;
        while (temp->link != CL->head)
            temp = temp->link;
        newNode->link = temp->link;
        temp->link = newNode;
        CL->head = newNode;
    }
}

void insertMiddleNode(LinkedList_h* CL, ListNode* pre, char* x) {
    ListNode* newNode;
    newNode = (ListNode*)malloc(sizeof(ListNode));
    strcpy(newNode->data, x);
    if (CL->head == NULL) {
        CL->head = newNode;
        newNode->link = newNode;
    } else {
        newNode->link = pre->link;
        pre->link = newNode;
    }
}

void insertLastNode(LinkedList_h* CL, char* x) {
    ListNode* newNode, * temp;
    newNode = (ListNode*)malloc(sizeof(ListNode));
    strcpy(newNode->data, x);
    if (CL->head == NULL) {
        CL->head = newNode;
        newNode->link = newNode;
    } else {
        temp = CL->head;
        while (temp->link != CL->head)
            temp = temp->link;
        newNode->link = CL->head;
        temp->link = newNode;
    }
}

void deleteNode(LinkedList_h* CL, ListNode* old) {
    ListNode* pre;
    if (CL->head == NULL) return;
    if (CL->head->link == CL->head) {
        free(CL->head);
        CL->head = NULL;
        return;
    } else if (old == NULL) return;
    else {
        pre = CL->head;
        while (pre->link != old) {
            pre = pre->link;
        }
        pre->link = old->link;
        if (old == CL->head)
            CL->head = old->link;
        free(old);
    }
}

ListNode* searchNode(LinkedList_h* CL, char* x) {
    ListNode* temp;
    temp = CL->head;
    if (temp == NULL) return NULL;
    do {
        if (strcmp(temp->data, x) == 0) return temp;
        else temp = temp->link;
    } while (temp != CL->head);
    return NULL;
}

int main(void) {
    LinkedList_h* CL;
    ListNode* p;

    CL = createLinkedList_h();
    printf("(1) 원형 연결 리스트 생성하기! \n");
    printList(CL);

    printf("\n(2) 원형 연결 리스트에 [월] 노드 삽입하기! \n");
    insertFirstNode(CL, "월");
    printList(CL);

    printf("\n(3) 원형 연결 리스트의 [월] 노드 뒤에 [수] 노드 삽입하기! \n");
    p = searchNode(CL, "월");
    insertMiddleNode(CL, p, "수");
    printList(CL);

    printf("\n(4) 원형 연결 리스트의 [수] 노드 뒤에 [금] 노드 삽입하기! \n");
    p = searchNode(CL, "수");
    insertMiddleNode(CL, p, "금");
    printList(CL);

    printf("\n(5) 원형 연결 리스트에서 [수] 노드 삭제하기! \n");
    p = searchNode(CL, "수");
    deleteNode(CL, p);
    printList(CL);
    getchar();

    return 0;
}
