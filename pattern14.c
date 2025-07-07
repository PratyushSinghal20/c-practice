/*

*           * 
  *       *   
    *   *     
      *       
    *   *     
  *       *   
*           * 


    */


    #include <stdio.h>

int main() {
    int i, j;
    int size = 7;  

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j || i + j == size - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
