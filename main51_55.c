#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

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
  return n + my_rand(m - n);
}

// 54, 上の randf( ) を呼び出して、2次元乱数 [x, y] (0.0 ≤ x < 1.0, 0.0 ≤ y < 1.0) を n 個プリントする関数 void randf_p(int n).

// for文でn回randf()を呼び出した。

void randf_p(int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("[%lf, %lf]\n", randf(), randf());
  }
}

// 55, 上の randf( ) を応用し、円周率 pi を求める関数 float pi(int n). 2次元乱数 [x,y]、 (0.0 ≤ x < 1.0, 0.0 ≤ y < 1.0) を n = 1,000 個発生し、 x^2 + y^2 ≤ 1 となるものを数える。多分それは 785 近辺の数になる。 とすると円周率 pi は (785/1000)*4 と推定できる。 n を増やすと pi の精度は上がるはず。

// x^2 + y^2 ≤ 1が成立するときに、countに1足していき、その数をnで割って4乗した数を返した

float pi(int n) {
  int i;
  int count = 0;
  float x, y;

  for (i = 0; i < n; i++) {
    x = randf();
    y = randf();
    if (x * x + y * y <= 1) {
      count++;
    }
  }
  return powf((float)count / n, 4);
}

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
  randf_p(5);

  printf("No55\n");
  printf("%lf\n", pi(1000));

  return 0;
}
