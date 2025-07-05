#include<stdio.h>



int main() {
    int num ,   rem , result = 0;

    printf("Enter the number: ");
    scanf("%d" , &num);

    while(num != 0){
      rem = num % 10;
      result = result * 10 + rem;
      num = num / 10;
    }

    printf("Reversed number: %d\n", result);
    return 0;


     
  
}