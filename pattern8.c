/*

1
1 3
1 3 5
1 3 5 7

*/


#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {           
        for (j = 1; j <= i; j++) {
            printf("%d ", 2 * j - 1);   
        }
        printf("\n");
    }

    return 0;
}
