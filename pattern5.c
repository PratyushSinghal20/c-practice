/*
****
***
**
*
*/

#include <stdio.h>

int main() {
  int i , j , n;

  printf("enter the value of n:");
  scanf("%d", &n);


for(i = 1 ; i < n ; i++) {
  for(j= 1 ; j < n - i ; j++)  {
    printf("*");
  }
  printf("\n");
  }
  return 0;
}
