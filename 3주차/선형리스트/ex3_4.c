#include <stdio.h>
#include "listS.h"
// 리스트 선언
// 리스트 출력


int main(void){

    int list[MAX] = {10, 20, 40, 50, 60, 70};
    int i, move, size = 6;

    printf("\n삽입 전 선형 리스트 : ");
    for(i = 0; i < size; i++) printf("%3d", list[i]);// 현재 리스트 출력
    printf("\n원소의 갯수 : %d \n", size);

    move = insertElement(list, size, 30); // 30 삽입
    // 함수에서 이동횟수 반환한다

    printf("\n삽입 후 선형 리스트 : ");
                                   
    for(i = 0; i <= size; i++){
        printf("%3d", list[i]);
        }
    printf("\n원소의 갯수 : %d", ++size);
    printf("\n자리 이동 횟수 ; %d \n", move);

    move = deleteElement(list, size, 30); // 삭제
    // 함수에서 이동횟수 반환
    if(move == size) printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다.\n");
    else{
        printf("\n삭제 후 선형 리스트 : ");
        for(i = 0; i < size -1; i++){
            printf("%3d", list[i]);
        }
        printf("\n원소의 갯수  : %d", --size);
        printf("\n자리 이동 횟수 : %d\n", move);

    }

    getchar(); return 0;

}


// cd "/Users/idawon/Desktop/Work_Space/C/자료구조/3주차/과제/" && gcc ex3_4.c listS.c -o ex3_4.out && ./ex3_4.out
