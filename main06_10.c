#include <stdio.h>

// 6, 整数 x を引数にとり、それが偶数だったら 1、 奇数だったら 0 を返す関数 int even(int x).

int even(int x) {
  if (x % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

// 7, キーボードから整数ひとつを入力し、それが偶数だったら "偶数です"、 奇数だったら "奇数です" とプリントする関数 void even_p(void).

void even_p(void) {
  int num;

  scanf("%i", &num);
  if (num % 2 == 0) {
    printf("偶数です。\n");
  } else {
    printf("奇数です。\n");
  }
}

// 8, 整数 x, y を引数にとり、それらを足した数を戻り値とする関数 int add2(int x, int y).

int add2(int x, int y) {
  return x + y;
}

// 9, 整数 x, y を引数にとり、それらを足した数をプリントする関数 void add2_p(int x, int y).

void add2_p(int x, int y) {
  printf("%i\n", x + y);
}

// 10, 整数 x, y を引数にとり、それらの和、差、積、整数商をプリントする関数 void wa_sa_seki_sho_p(int x, int y).

/*
まず、和、差、積、整数商をプリントする関数なので、
printf()を使って和は+、差は-、積は*、整数商は/を用いて求められるので、
%iに入るものにそれぞれx + y、x - y、x * y、x / yを書いて出力した。
*/

void wa_sa_seki_sho_p(int x, int y) {
  printf("%i\n", x + y);
  printf("%i\n", x - y);
  printf("%i\n", x * y);
  printf("%i\n", x / y);
}

int main(void) {
  printf("No6\n");
  printf("%i\n", even(4));

  printf("No7\n");
  even_p();

  printf("No8\n");
  printf("%i\n", add2(4, 5));

  printf("No9\n");
  add2_p(12, 45);

  printf("No10\n");
  wa_sa_seki_sho_p(12, 4);

  return 0;
}
