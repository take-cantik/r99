#include <stdio.h>

// 36, 整数一 つを引数とし、その数が完全数かどうかを判定する関数 int is_perfect(int n).

/*完全数は自身の数は含まないので、sum_of_divisors関数がnの二倍と等しくなると完全数と言える。*/

int sum_of_divisors(int n) {
  int i;
  int sum = 0;

  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  return sum;
}

int is_perfect(int n) {
  return sum_of_divisors(n) == 2 * n;
}

// 37, 西暦 year を引数にとり昭和、平成、令和の和暦をプリントする関数 void j_era(int year). j_era(2020)は "令和2年" をプリントする。

/*if文でyearが◯以上としているので、令和からかいた*/

void j_era(int year) {
  if (year >= 2019) {
    printf("令和%i年\n", year - 2018);
  } else if (year >= 1989) {
    printf("平成%i年\n", year - 1988);
  } else if (year >= 1926) {
    printf("昭和%i年\n", year - 1925);
  }
}

// 38, 西暦 year を引数にとり、閏年であれば 1、そうでなければ 0 を返す関数。 西暦が 4 で割り切れれば閏年。ただし、100 で割り切れる時は平年。 ただし、400 で割り切れる時は閏年。 int leap(int year).

/*FizzBuzzと同じように、条件が強い方から場合分けした*/

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

// 39, hh 時 mm 分 ss 秒の hh, mm, ss を引数にとり、0 時 0 分 0 秒からの通 算秒に変換した整数を戻り値とする関数 int time_to_int(int h, int m, int s).

/*hに3600, mに60, をかけて足す*/

int time_to_int(int h, int m, int s) {
  return (h * 60 + m) * 60 + s;
}

// 40, 

/**/

int main(void) {
  printf("No36\n");
  printf("%i\n", is_perfect(496));

  printf("No37\n");
  j_era(1926);

  printf("No38\n");
  printf("%i\n", leap(2100));

  printf("No39\n");
  printf("%i\n", time_to_int(1, 4, 3));

  printf("No40\n");
  
  return 0;
}

