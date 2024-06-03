#include  <stdlib.h>
#include "stackL.h"

// 스택익 공백인지 확인하는 연산
int isStackEmpty(){
	if (top == NULL) return 1;
	else return 0;
}

// 스택이 top에 원소를 삽입하는 연산
void push(element item){
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp -> data = item;
	temp -> link = top;
	top = temp;
}

// 스택이 top에 원소를 삭제하는 연산
element pop(){
	element item;
	stackNode* temp = top;

	if(isStackEmpty()){
		printf("\n\n stack is empty !\n");
		return 0;
	}
	else {
		item = temp -> data;
		top = temp -> link;
		free(temp);
		return item;
	}
}

// 스택의 top 원소를 검색하는 연산
element peek(){
	if (isStackEmpty()){
		printf("\n\n Stack is empty\n");
		return 0;
	}
	else {
		return (top -> data);
	}

}

// 스택의 우 너소를 top에 bottom 순서로 출력하는 연산
void printStack(){
	stackNode* p = top;
	printf("\n STACK [ ");
	while(p){
		printf1("%d", p->data);
		p = p -> link;
	}
	printf1("] ");
}