#include<stdio.h>

int main() {

  int a, b;

  printf("enter two numbers:");
  scanf("%d %d", &a, &b);

  if(a ^ b) {
    printf("Numbers are not equal.\n");
  } else {
    printf("Numbers are equal.\n");
  }

  return 0;
}