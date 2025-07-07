/*
1 2 3 4
1 2 3
1 2
1

*/


#include <stdio.h>

int main() {
  int i , j , n;

  printf("enter the value of n:");
  scanf("%d", &n);

  for(i = 0; i<= n ; i++) {
    for( j =1; j<= n-i ; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}