#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 51, 関数 long random(void) を呼ぶとすごく大きい正の整数乱数が返ってくる。 random( ) を利用し、0 以上 n 未満の正の整数乱数を返す関数 int my_rand(int n).

// random()関数を使い、nで割ったあまりを返すことでできる。

int my_rand(int n) {
  return random() % n;
}

// 52, 0.0 ≤ r < 1.0 の浮動小数点数乱数を返す関数 float randf(void).

/*
  my_rand関数をfloat型にして、それを10で割った数を返した。
*/

float randf(void) {
  return (float)my_rand(1000000) / 1000000;
}

// 53, n ≤ r < m の整数乱数を返す関数 int rand_int(int n, int m).

// my_randでn以上になったら返す。

int rand_int(int n, int m) {
  int num;
  for (;;) {
    num = my_rand(m);
    if (num >= n) {
      return num;
    }
  }
}

// 54, 

/**/

// 55, 

/**/

int main(void) {
  printf("No51\n");
  srandom(getpid( ));
  int i;
  for (i = 0; i < 10; i++) {
    printf("%i\n", my_rand(10));
  }

  printf("No52\n");
  for (i = 0; i < 10; i++) {
    printf("%lf\n", randf());
  }

  printf("No53\n");
  for (i = 0; i < 10; i++) {
    printf("%i\n", rand_int(2100000, 2140000));
  }

  printf("No54\n");

  printf("No55\n");

  return 0;
}
