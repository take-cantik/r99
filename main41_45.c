#include <stdio.h>

// 41, 平年の1 月 1 日から同年 mm 月 dd 日までの日数を返す関数 int days(int mm, int dd).

/*
  month_day[12]を作り、それぞれの月の日数を入れ、
  for文でmm月の前までの日数をたし、最後にその数にdd日を足して、
  1日スタートなので1を引いた値を返した。
*/

int days(int mm, int dd) {
  int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day = 0;
  int i;

  for (i = 0; i < mm - 1; i++) {
    day += month_day[i];
  }

  return day + dd - 1;
}

// 42, 

/**/

// 43, 

/**/

// 44, 

/**/

// 45, 

/**/

int main(void) {
  printf("No41\n");
  printf("%i\n", days(2, 13));

  printf("No42\n");

  printf("No43\n");

  printf("No44\n");

  printf("No45\n");
  
  return 0;
}

