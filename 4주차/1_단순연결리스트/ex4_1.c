// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "InsertLinkedList.h"
              
linkedList_h* createLinkedList_h(void){
    linkedList_h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h));
    L->head = NULL;
    return L;
}

void freeLinkedList_h(linkedList_h*L){
    listNode* p;
    while(L->head != NULL){
        p = L -> head;
        L->head = L ->head -> link;
        free(p);
        p = NULL;
    }
}

void printList(linkedList_h* L){
    listNode* p;
    printf(" L = (");
    p = L->head;
    while(p != NULL){
        printf("%s", p->data);
        p = p -> link;
        if(p != NULL) printf(", ");
    }
    printf(") \n");
}

void insertFirstNode(linkedList_h* L, char* x){
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);
    newNode->link = L->head;
    L->head = newNode;
}

void insertMiddleNode(linkedList_h* L, listNode* pre, char* x){
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);
    if(L->head == NULL){
        newNode->link = NULL;
        L->head = newNode;
    }
    else if(pre == NULL){
        newNode -> link = L->head;
        L->head = newNode;
    }
    else{
        newNode -> link = pre-> link;
        pre->link = newNode;

    }
}

void insertLastNode(linkedList_h* L, char* x){
    listNode* newNode;
    listNode* temp;
    newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode -> data, x);
    newNode->link = NULL;
    if(L -> head == NULL){
        L->head = newNode;
        return;
    }

    temp=L->head;
    while (temp -> link != NULL) temp = temp -> link;
    temp->link = newNode;
}

// 메인 ----------------------------------------------------- - - - - - - - - -

// 단순 연결 리스트
int main(void){
    linkedList_h* L;
    L = createLinkedList_h();
    printf("(1) 공백 리스트 생성기 ! \n");
    printList(L);

    printf("\n(2) 리스트에 [수] 노트 삽입하기 ! \n");
    insertFirstNode(L, "수");
    printList(L);

    printf("\n(3) 리스트 마지막에 [금] 노트 삽입하기 ! \n");
    insertFirstNode(L, "금");
    printList(L);

    printf("\n(4) 리스트 첫 번째에 [월] 노트 삽입하기 ! \n");
    insertFirstNode(L, "월");
    printList(L);

    printf("\n(5) 리스트 공간을 해제하여 공백 리스트로 만들기!\n");
    freeLinkedList_h(L);
    printList(L);

    getchar();  
    return 0;
}
// cd "/Users/idawon/Desktop/Work_Space/C/자료구조/4주차/단순연결리스트/" && gcc ex4_1.c InsertLinkedList.c -o ex4_1.out && ./ex4_1.out
