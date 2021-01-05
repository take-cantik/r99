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

// 42, y1 年 m1 月 d1 日から y2 年 m2 月 d2 月までの日数を返す関数 int days_between(int y1, int m1, int d1, int y2, int m2, int m2). 自分は今日まで何日生きてきましたか？

/*
  まず、y1からy2までをそれぞれを含まず回して、閏年であれば366, そうでなければ365を足した。
  次に、年が同じであればdays関数にそれぞれの月、日を引数としたものを引きそれをdayに足し、
  そうでなければ、m1からd1からその年の最後までを足し、daysでy2のとしの最後までを合わせた。
  最後にy1, y2が閏年の場合に1ずつ足す。
*/

int leap(int year) {
  if (year % 400 == 0) {
    return 1;
  } else if (year % 100 == 0) {
    return 0;
  } else if (year % 4 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int days_between(int y1, int m1, int d1, int y2, int m2, int d2) {
  int day = 0;
  int i;

  for (i = y1 + 1; i < y2; i++) {
    day += 365 + leap(i);
  }

  if (y1 == y2) {
    day += days(m2, d2) - days(m1, d1);
  } else {
    day += 364 - days(m1, d1) + days(m2, d2);

    if (leap(y1) && m1 < 3) {
      day++;
    }

    if (leap(y2) && m2 > 2) {
      day++;
    }
  }

  return day;
}

// 43, 

/**/

// 44, 3 桁の整数の桁を入れ替えた整数を返す関数 int rev3(int n). 例えば rev(314) の戻り値は 413 になる。310 は 13 だな。

// 百の桁と一の桁の数を取り出して、それぞれ引いて、逆に足した。

int rev3(int n) {
  int handred = n % 10;
  int one = n / 100;
  n -= (handred + one * 100);
  n += (handred * 100 + one);

  return n;
}

// 45, rev3(n) が元の整数 n と等しくなる3桁の整数は何個あるかを返す関数 int how_many_rev3(void).

// 100から999まででrev3したものとする前ので等しかったらcountに1を足す。

int how_many_rev3(void) {
  int i;
  int count = 0;
  for (i = 100; i < 1000; i++) {
    if (rev3(i) == i) {
      count++;
    }
  }

  return count;
}

int main(void) {
  printf("No41\n");
  printf("%i\n", days(12, 31));

  printf("No42\n");
  printf("%i\n", days_between(2000, 4, 17, 2021, 1, 4));

  printf("No43\n");

  printf("No44\n");
  printf("%i\n", rev3(150));

  printf("No45\n");
  
  return 0;
}

