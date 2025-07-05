#include<stdio.h>


int factorial(int n) {

  if (n<=1) {
    return 1;
    }
    else {
      return n * factorial (n-1);
    }
}

int main() {
  int n;
  printf("enter the number of which you have to find the factorial: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
  }


  return 0;
}