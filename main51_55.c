#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 51, 関数 long random(void) を呼ぶとすごく大きい正の整数乱数が返ってくる。 random( ) を利用し、0 以上 n 未満の正の整数乱数を返す関数 int my_rand(int n).

// random()関数を使い、nで割ったあまりを返すことでできる。

int my_rand(int n) {
  return random() % n;
}

// 52, 

/**/

// 53, 

/**/

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

  printf("No53\n");

  printf("No54\n");

  printf("No55\n");

  return 0;
}
