/*

      *
      *
  * * *  *  *
      * 
      * 

*/


#include <stdio.h>

int main() {
    int i, j;
    int size = 5;         
    int mid = size / 2;     

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == mid || j == mid) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}

