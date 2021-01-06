#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

// 43, 時刻 h1:m1:s1 と 時刻 h2:m2:s2 をそれぞれ文字列として受け取り、 それらの時間差を文字列で戻す関数 char * times_between_string(char time1[ ], char time2[ ]).

/*
  time_atoi関数は"hh:mm:ss"の形の文字列を:区切りでint型の配列に入れていく関数。
  time_diff関数はその配列から差を求める関数。
  link_str関数はtime_diffで作られた配列を文字列に戻す関数。
  それを順に組み合わせた。
  ただし、呼び出す際に文字列リテラルを与えると上手く動作しない。
  御教授願います。
*/

void time_atoi(char time[], int time_int[]) {
  char *time_str;

  time_str = strtok(time, ":");
  time_int[0] = atoi(time_str);

  int i;
  for (i = 1; time_str != NULL; i++) {
    time_str = strtok(NULL, ":");

    if (time_str != NULL) {
      time_int[i] = atoi(time_str);
    }
  }
}

void time_diff(int ret_time[], int time1[], int time2[]) {
  int down = 0;
  int i;

  for (i = 2; i >= 0; i--) {
    if (time1[i] - time2[i] - down >= 0) {
      ret_time[i] = time1[i] - time2[i] - down;
      down = 0;
    } else {
      ret_time[i] = 0;
      down = 1;
    }
  }
}

void link_str(char time[], int time_int[]) {
  char time_str[3];
  int i;

  for (i = 0; i < 3; i++) {
    sprintf(time_str, "%i", time_int[i]);
    strcat(time, time_str);
    if (i != 2) {
      strcat(time, ":");
    }
  }
}

char *times_between_string(char time1[], char time2[]) {
  int time_i1[3];
  int time_i2[3];
  time_atoi(time1, time_i1);
  time_atoi(time2, time_i2);

  int diff_time[3];
  time_diff(diff_time, time_i1, time_i2);

  char link_time[9];
  link_str(link_time, diff_time);

  char *ret_time = link_time;

  return ret_time;
}

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
  char time1[] = "12:12:12";
  char time2[] = "11:11:11";
  printf("%s\n", times_between_string(time1, time2));

  printf("No44\n");
  printf("%i\n", rev3(150));

  printf("No45\n");
  printf("%i\n", how_many_rev3());
  
  return 0;
}

