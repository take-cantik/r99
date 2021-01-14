#include <stdio.h>

//

/**/

//

/**/

//

/**/

//

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

  printf("No67\n");

  printf("No68\n");

  printf("No69\n");

  printf("No70\n");
  printf("%i\n", fibo(7));
  
  return 0;
}

