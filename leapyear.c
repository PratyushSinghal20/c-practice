#include<stdio.h>

void leap_year(int year) {

  if( year % 400 == 0) {
    printf("this is a leap year ");

  }

    else if(year % 100 ==0) {
      printf("it is not a leap year ");

    }
    else if(year % 4 ==0) {
      printf("this is a leap yar");
    }
      else {
        printf("it is not a leap year");
      }
    
  }


  int main() {
    int year;
    printf("enter the year:");
    scanf("%d" , &year);

    leap_year(year);

    return 0;
  }