#include <stdio.h>

int main(void) {
    char string[100];  // 사용자로부터 입력받을 문자열을 저장할 배열

    printf("문자열을 입력하세요: ");
    scanf("%s", string);  // 표준 입력으로부터 문자열을 받아 string에 저장

    printf("\n입력된 문자열은\n");
    printf("\"%s\"\n", string);
    printf("입니다\n");

    int size = 0;
    while (string[size] != '\0') {
        size++;  // 널 문자가 나올 때까지 문자열의 길이를 계산
    }
    printf("입력된 문자열의 길이 = %d\n", size);

    return 0;
}