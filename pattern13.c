
/*

******
*    *
*    *
****** 


*/

#include <stdio.h>

int main() {
    int rows = 4;
    int cols = 6;
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
           
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
