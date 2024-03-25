#include <stdio.h>
#include <string.h>

int main(void) {

    // char c1[2][3][20]={"Hong Gil Dong",
    //                   "Computer Electronic",
    //                   "2021100101",
    //                   "Hong Gil Soon",
    //                   "Computer Electronic",
    //                   "2021100101"};    

    char c1[2][3][20];

    for (int i = 0; i < 2; i++) {
        printf("\n학생 %d의 이름: ", i + 1);
        fgets(c1[i][0], 20, stdin);
        c1[i][0][strcspn(c1[i][0], "\n")] = 0; 
        printf("학생 %d의 학과: ", i + 1);
        fgets(c1[i][1], 20, stdin);
        c1[i][1][strcspn(c1[i][1], "\n")] = 0; 
        printf("학생 %d의 학번: ", i + 1);
        fgets(c1[i][2], 20, stdin);
        c1[i][2][strcspn(c1[i][2], "\n")] = 0;
    }

    for (int i = 0; i < 2; i++) {
        printf("\n\n학생 %d", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("\n%s", c1[i][j]);
        }
    }

    return 0;
}