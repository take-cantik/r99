#include <stdio.h>
#include <stdlib.h>

// 71, fibo(n) が最初に n を超える n はいくらかを求める関数 int fibo_over(n). fibo_over(20000) の戻り値はきっと 23 だ。

// fibo(i)がnを超えたときにそのiを返した

int fibo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }

  return fibo(n-1) + fibo(n-2);
}

int fibo_over(int n) {
  int i;
  for (i = 0;;i++) {
    if (fibo(i) > n) {
      return i;
    }
  }
}

// 72, n 以上 m 未満となるフィボナッチ数の総和を返す関数 int sum_of_fibo_between(int n, int m). sum_of_fibo_between(10000,100000) の戻り値は 178700 よりちょっと大きい。

// nからm未満までfiboに入れていき、sumに足し合わせた。

int sum_of_fibo_between(int n, int m) {
  int i;
  int sum = 0;

  for (i = n; i < m; i++) {
    sum += fibo(i);
  }

  return sum;
}

// 73, サイズ n の整数配列 a[ ] に 0~99 の乱数をセットする関数 void init_randoms_99(int a[ ] , int n).

// for文でn回回して、その中でmy_rand関数を用いて、代入させた。

int my_rand(int n) {
  return random() % n;
}

void init_randoms_99(int a[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    a[i] = my_rand(100);
  }
}

// 74, 上で作った乱数配列 a[ ] 中にみつからない 0~99 の数をプリントする関数 void find_not(int a[ ], int n).

/*
  iを0から100まで回し、その中でn回a[]を回して、もしiとa[j]が等しければia_findを1にしてbeakし、
  その後is_findが1であればcontinueし、そうでなければiを出力した。
*/

void find_not(int a[], int n) {
  int i, j;
  int is_find = 0;

  for (i = 0; i < 100; i++) {
    for (j = 0; j < n; j++) {
      if (i == a[j]) {
        is_find = 1;
        break;
      }
    }
    if (is_find == 1) {
      is_find = 0;
      continue;
    }
    printf("%i\n", i);
  }
}

// 75, 上で作った乱数配列 a[ ] ( サイズは n) 中に一番たくさん重複して現れる数を返す関数 int find_max_dupli(int a[ ], int n).

/*
  まず、初期値を0とした要素数100の配列a_num[]を作る。この配列は0〜99のうちいくつ重複しているのかを格納するものである。
  次に、for文でiを0から100まで回した。そこで、iがいくつ重複しているのかを返す関数duplicate()を実行させせ、その数をa_numのi番目の要素へ代入した。
  そして、配列の一番大きな要素のindexを返すmax_index_of_array関数を返した。
*/

int duplicate(int a[], int n, int a_n) {
  int i;
  int count = 0;
  for (i = 0; i < n; i++) {
    if (a[i] == a_n) {
      count++;
    }
  }
  return count;
}

int max_index_of_array(int array[], int n) {
  int i, max_index;
  int max_num = 0;

  for (i = 0; i < n; i++) {
    if (array[i] > max_num) {
      max_num = array[i];
      max_index = i;
    }
  }

  return max_index;
}

int find_max_dupli(int a[], int n) {
  int i, duplicate_num;
  int a_num[100] = {};

  for (i = 0; i < 100; i++) {
    duplicate_num = duplicate(a, n, i);
    if (duplicate_num > 0) {
      a_num[i] += duplicate_num;
    }
  }

  return max_index_of_array(a_num, 100);
}

int main(void) {
  printf("No71\n");
  printf("%i\n", fibo_over(20000));

  printf("No72\n");
  printf("%i\n", sum_of_fibo_between(1, 10));

  printf("No73\n");
  int ahi[10];
  init_randoms_99(ahi, 10);
  int i;
  for (i = 0; i < 10; i++) {
    printf("%i ", ahi[i]);
  }
  printf("\n");

  printf("No74\n");
  find_not(ahi, 10);

  printf("No75\n");
  int ahiahi[700];
  init_randoms_99(ahiahi, 700);
  printf("%i\n", find_max_dupli(ahiahi, 700));

  return 0;
}

