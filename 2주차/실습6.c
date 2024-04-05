#include <stdio.h>

int main(void){
    
    struct employee{
        char name[10];
        int year;
        int pay;
    };

    struct employee Lee = {"Ann", 20, 10000};

    return 0;
}