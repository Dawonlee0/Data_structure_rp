// 하노이 탑 원리
#include <stdio.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("A에서 원반 1를(을) %c로 옮김\n", to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("A에서 원반 %d를(을) %c로 옮김\n", n, to_rod);
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 3; // 원반의 수
    hanoi(n, 'A', 'C', 'B');  // A, B, C는 각각 탑의 이름
    return 0;
}

