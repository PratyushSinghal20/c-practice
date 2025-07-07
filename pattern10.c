/*

A
A B
A B C
A B C D


*/


#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {            
        for (j = 0; j < i; j++) {         
            printf("%c ", 'A' + j);      
        }
        printf("\n");
    }

    return 0;
}
