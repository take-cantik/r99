#include <stdio.h>

// 66, n 未満の素数の和を求める関数 int sum_primes_under(int n). sum_primes_under(1000) は 76127 のはず。

// n未満までiをforで回し、もしis_primeだったらsumに加算する。

int is_prime(int n) {
  int i;
  int finish_num = n;

  if (n == 0 || n == 1) {
    return 0;
  }

  if (n == 2) {
    return 1;
  }

  for (i = 2; i <= finish_num; i++) {
    if (n % i == 0) {
      return 0;
    }
    finish_num = n / i;
  }

  return 1;
}

int sum_primes_under(int n) {
  int i;
  int sum = 0;

  for (i = 0; i < n; i++) {
    if (is_prime(i)) {
      sum += i;
    }
  }

  return sum;
}

// 67, 関数 int factorial(int n) を定義せよ。 factorial(5) は 5! の値を戻り値とする。 一般に factoria(n) = n * factorial(n-1). 0! は 1 だよ。

// 再帰関数でデフォルトで1の時1を返し、その他の時にn * factorial(n-1)を返した。

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

// 68, 

/**/

// 69, 

/**/

// 70, フィボナッチ数列を計算する関数 int fibo(int n) を定義せよ。 fibo(0) = 0, fibo(1) = 1, fibo(2) = 1 で、 一般にfibo(n) = fibo(n-1) + fibo(n-2) だ。

// 再帰関数を用いて、nが0か1の時以外にその前の項とそのさらに前の項の和を返す。

int fibo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }

  return fibo(n-1) + fibo(n-2);
}

int main(void) {
  printf("No66\n");
  printf("%i\n", sum_primes_under(12));

  printf("No67\n");
  printf("%i\n", factorial(5));

  printf("No68\n");

  printf("No69\n");

  printf("No70\n");
  printf("%i\n", fibo(7));
  
  return 0;
}

