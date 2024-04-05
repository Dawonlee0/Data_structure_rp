#include <stdio.h>
long int fact(int n){
        printf("fact(%d) 함수 호출\n",n);
        if (n <= 1){   
            printf("fact(1) 값 1 반환\n");
            return (1);
        }
        else{
            int result = n * fact(n-1);
            printf("fact(%d) 값 %d 반환\n", n, result);
            return result;
        }
}

int main(void) {
    
    int n = 4;
    int result;

    result = fact(n);
    printf("\n%d의 팩토리얼 값은 %d입니다.", n, result);

    return 0;
}
