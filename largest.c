#include<stdio.h>

int main() {
  int a, b, c;

  printf("enter the numbers:");
  scanf("%d %d %d", &a, &b, &c);

  if(a > b && a > c){
    printf(" a is largest");
  }
  else if(b> a && b > c){
    printf("b is the lagrgest");
  }
 else{
  printf(" c is largest");

 }  

return 0;
}