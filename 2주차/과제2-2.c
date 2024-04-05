#include <stdio.h>

int main(void) {
    
    int array[2][3][4];
    int i = 1;
    for(int a = 0; a<2; a++){
        for(int b = 0; b<3; b++){
            for(int c = 0; c<4; c++){
                array[a][b][c] = i;
                printf("array[%d][%d][%d] = %d\n", a,b,c,array[a][b][c]);
                i++;
            }
        }
    }
    return 0;
}