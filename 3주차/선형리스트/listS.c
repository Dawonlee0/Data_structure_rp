#include "listS.h"

int insertElement(int L[], int n, int x){
    int i, k = 0, move = 0; // 자리 이동에 대한 횟수 카운트

    for(i = 0; i < n; i++){
        if(L[i] <= x && x <= L[i + 1]){
            k = i + 1;
            break;
        }
    }

    if (i == n)
        k = n;

    for(i = n; i > k; i--){
        L[i] = L[i - 1];
        move++;
    }

    L[k] = x;
    return move;
}

int deleteElement(int L[], int n, int x){
    int i, k = n, move = 0;

    // 삭제할 값과 같은 값을 찾는 과정이다.
    for(i = 0; i < n; i++){
        if (L[i] == x){
            k = i;
            break;
        }
    }
    
    if (i == n) move = n;

    for(i = k; i < n - 1; i++){
        L[i] = L[i+1];
        move++;
    }

    return move;
}
