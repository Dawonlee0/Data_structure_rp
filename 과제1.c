#include <stdio.h>

int main(void){
    char *strings[] = {"korea", "Seoul", "Mapo", "152번지2/3"};

    int size = sizeof(strings) / sizeof(char *);
    printf("%s",size);

    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}