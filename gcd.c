#include<stdio.h>

int main()  {
int a , b;


printf("enter the two numbers:");
scanf("%d %d , &a , &b");

while(a != b) {
    if(a > b) {
        a = a - b;
    } else {
        b = b - a;
    }
  }

printf("gcd is %d" , a);
return 0;
}

