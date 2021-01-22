#include <stdio.h>

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

// 72, 

/**/

// 73, 

/**/

// 74, 

/**/

// 75, 

/**/

int main(void) {
  printf("No71\n");
  printf("%i\n", fibo_over(20000));

  printf("No72\n");

  printf("No73\n");

  printf("No74\n");

  printf("No75\n");
  
  return 0;
}

